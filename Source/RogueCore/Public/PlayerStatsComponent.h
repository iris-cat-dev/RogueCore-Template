#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DelegateDelegate.h"
#include "EndMissionResult.h"
#include "Templates/SubclassOf.h"
#include "PlayerStatsComponent.generated.h"

class APlayerCharacter;
class UCappedResource;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnKillAdded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalRevived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalDeaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TotalGoldMined;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TotalMOMsMined;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TotalMineralsMined;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TotalXPGained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TotalHealthRestored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerCharacter> LastPlayedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FEndMissionResult EndMissionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UClass* CauseOfDeathClass;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    double TotalDamageDealt;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    double TotalDamageTaken;
    
public:
    UPlayerStatsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendEndMissionResult(const FEndMissionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnResourceMined(UCappedResource* Resource, float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndMissionResultReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEndMissionResult GetEndMissionResult() const;
    
    UFUNCTION(BlueprintCallable)
    void AddRevived();
    
    UFUNCTION(BlueprintCallable)
    void AddKill();
    
    UFUNCTION(BlueprintCallable)
    void AddHealthRestored(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void AddDeath(UClass* CauseOfDeath);
    
    UFUNCTION(BlueprintCallable)
    void AddDamageTaken(const double Damage);
    
    UFUNCTION(BlueprintCallable)
    void AddDamageDealt(const double Damage);
    
};

