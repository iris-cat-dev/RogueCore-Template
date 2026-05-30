#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DelegateDelegate.h"
#include "VoteData.h"
#include "VoteParticipantComponent.generated.h"

class AFSDPlayerState;
class UVoteWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UVoteParticipantComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoteData VoteData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnVoteDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVoteWidget* VoteWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MyVoteIndex;
    
public:
    UVoteParticipantComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Vote(int32 InVoteIndex);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_RecordParticipantCursor(const FVector2f& Pos);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetVoteData(const FVoteData& InData);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_ReceiveParticipantCursor(AFSDPlayerState* InPlayer, const FVector2f& InPos);
    
};

