#pragma once
#include "CoreMinimal.h"
#include "EPlanetBiomeState.h"
#include "ERunDepth.h"
#include "PlanetPointSetup.h"
#include "ShowroomItem.h"
#include "PlanetShowroomItem.generated.h"

class UAudioComponent;
class UBiome;
class UMaterialInstance;
class UMaterialInterface;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ROGUECORE_API APlanetShowroomItem : public AShowroomItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NoHoverMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HoverMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NoHoverWhenLockedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HoverWhenLockedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NoHoverWhenUnavailableMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HoverWhenUnavailableMaterial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> PlanetDepthMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ScalarParametersToCopyFromDepthMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TextureParametersToCopyFromDepthMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlanetPointSetup HoveredPlanetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlanetPointSetup> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> Lines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PlanetMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunDepth SelectedDeptht;
    
public:
    APlanetShowroomItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateMaterialParameters(ERunDepth Depth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAmbienceAudio();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAmbienceAudio();
    
    UFUNCTION(BlueprintCallable)
    void SetupPlanetPoints(TArray<FPlanetPointSetup> InPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlanetViewDepth(const ERunDepth Depth);
    
    UFUNCTION(BlueprintCallable)
    void SetHoveredBiome(FPlanetPointSetup Point);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBiomeHovered(const UBiome* Biome, const EPlanetBiomeState BiomeState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UAudioComponent* GetDragAudioComponent() const;
    
};

