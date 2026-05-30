#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TerrainMaterialCore.h"
#include "TerrainMaterialCore.h"
#include "TestTerrainMaterialDecalItem.h"
#include "TestTerrainMaterialItem.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "TerrainMaterial.generated.h"

class UDialogDataAsset;
class UFXSystemAsset;
class UFXSystemComponent;
class UMaterialInstance;
class UObject;
class UResourceData;
class USoundCue;
class UTerrainMaterial;
class UTerrainType;

UCLASS(Blueprintable)
class ROGUECORE_API UTerrainMaterial : public UTerrainMaterialCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Collide: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Diggable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CanBeDrilled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ExplosionProof: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MeltsInFire: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PlatformDissolvable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* ResourceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitsNeededToMine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickAxeDigSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoveDebrisOnFirstHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutOnDig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* TerrainType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InGameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InGameDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Precious: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFXSystemAsset> DigParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> DigParticlesMaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DigParticlesColoOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFXSystemAsset> PartialDigParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> CrumbleSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> PartialMineSound;
    
public:
    UTerrainMaterial();

    UFUNCTION(BlueprintCallable)
    static void TestMaterialEffects(UTerrainMaterial* Material, UPARAM(Ref) TArray<FTestTerrainMaterialItem>& Items);
    
    UFUNCTION(BlueprintCallable)
    static void TestDecals(UTerrainMaterial* Material, UPARAM(Ref) TArray<FTestTerrainMaterialDecalItem>& Items);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    UFXSystemComponent* SpawnPartialDigParticles(UObject* WorldContextObject, FVector Location, FRotator Rotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    UFXSystemComponent* SpawnDigParticles(UObject* WorldContextObject, FVector Location, FRotator Rotation, float Density) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrecious() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInGameName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstance* GetDigParticlesMaterialOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetDigParticleColorOverride() const;
    
};

