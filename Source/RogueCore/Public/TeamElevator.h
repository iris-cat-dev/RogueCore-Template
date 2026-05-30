#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ETeamElevatorType.h"
#include "TeamTransport.h"
#include "Templates/SubclassOf.h"
#include "TeamElevator.generated.h"

class AActor;
class AGeneratorLine;
class AProceduralSetup;
class UDebrisPositioning;
class UElevatorGearsAnimInstance;
class URiskVector;
class USceneComponent;
class UStage;

UCLASS(Blueprintable)
class ATeamElevator : public ATeamTransport {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGeneratorLine* ElevatorCableInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MovingPlatformRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UElevatorGearsAnimInstance* GearsAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGeneratorLine> ElevatorCableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStage* NextStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepNextStageNumber, meta=(AllowPrivateAccess=true))
    int32 NextStageNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepNextLevelWarnings, meta=(AllowPrivateAccess=true))
    TArray<URiskVector*> NextLevelRiskVectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamElevatorType Type;
    
public:
    ATeamElevator(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static void SpawnSubElevatorCable(TSubclassOf<AGeneratorLine> InCableClass, const TArray<ATeamTransport*>& InTeamElevators, const TArray<FTransform>& InEnds);
    
    UFUNCTION(BlueprintCallable)
    void SpawnElevatorCable(const FTransform& Start, const TArray<FTransform>& End);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Receive_SetIsMoving(bool Moving);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRepNextStageNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRepNextLevelWarnings();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeNextLevel(const int32 NextStageIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeamElevatorType GetType() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UElevatorGearsAnimInstance* GetGearsAnimInstance() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGeneratorLine* GetElevatorCableInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetBottomLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<FTransform> GetAllElevatorCableStartPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<FTransform> GetAllElevatorCableEndPoints() const;
    
    UFUNCTION(BlueprintCallable)
    static FTransform FindTeamElevatorSpawnTransform(AProceduralSetup* setup, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, bool AllowInvalidRoomsAsFallback, float blockDistFromLandingZone, const bool rotateFacingLastTunnel);
    
};

