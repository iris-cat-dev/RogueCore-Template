#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CharacterBuildData.h"
#include "CharacterDamageData.h"
#include "ERunHistoryNetMessageDataType.h"
#include "OnBuildDataReceivedDelegate.h"
#include "OnDamageDataReceivedDelegate.h"
#include "OnRunHistoryDataReceivedDelegate.h"
#include "OnSharedRunDataReceivedDelegate.h"
#include "ParsedCharacterBuildData.h"
#include "ParsedCharacterDamageData.h"
#include "RunHistoryEntry.h"
#include "RunHistoryNetMessage.h"
#include "SharedRunData.h"
#include "RunHistoryStateComponent.generated.h"

class AFSDPlayerState;
class URunHistoryStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API URunHistoryStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildDataReceived OnBuildDataReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageDataReceived OnDamageDataReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSharedRunDataReceived OnSharedRunDataReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRunHistoryDataReceived OnRunHistoryDataReceived;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FParsedCharacterBuildData> CachedParsedBuildData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FParsedCharacterDamageData> CachedParsedDamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCharacterBuildData> CachedBuildData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCharacterDamageData> CachedDamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSharedRunData CachedSharedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRunHistoryEntry CachedRunHistoryEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRunHistoryNetMessage> NetMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<URunHistoryStateComponent*, bool> ActiveMessageListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> ReceivingBuffer;
    
public:
    URunHistoryStateComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestHistoryData(URunHistoryStateComponent* Sender, AFSDPlayerState* TargetState, ERunHistoryNetMessageDataType Type);
    
    UFUNCTION(BlueprintCallable)
    void RequestBuildData(AFSDPlayerState* TargetState);
    
    UFUNCTION(BlueprintCallable)
    bool GetLatestDamageData(const int32 PlayerId, FParsedCharacterDamageData& OutData);
    
    UFUNCTION(BlueprintCallable)
    bool GetLatestBuildData(const int32 PlayerId, FParsedCharacterBuildData& OutData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReceiveDataDone(ERunHistoryNetMessageDataType Type);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReceiveData(const TArray<uint8>& CharacterData);
    
};

