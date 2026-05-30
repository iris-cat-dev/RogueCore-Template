#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FSDPhysicsActor.h"
#include "ResourceChunk.generated.h"

class APlayerCharacter;
class AResourceChunk;
class UBXEBlueprintControlledObjective;
class UObject;
class UResourceData;
class USimpleObjectInfoComponent;
class USoundCue;

UCLASS(Blueprintable)
class ROGUECORE_API AResourceChunk : public AFSDPhysicsActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBeCollectedNormally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanBeCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleObjectInfoComponent* InfoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ResourceAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PickupSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* ResourceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> OverlappingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CollectedBy, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> CollectedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBXEBlueprintControlledObjective* SpawnedByObjective;
    
public:
    AResourceChunk(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AResourceChunk* SpawnChunk(UObject* WorldContextObject, UResourceData* Data, float Size, FVector position);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCollectOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CollectedBy();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UResourceData* GetResourceData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResourceAmount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalcMovement(float InProgress, const FVector& InVector, FVector& OutVelocity, FVector& OutAngularVelocity);
    
};

