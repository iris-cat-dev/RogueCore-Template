#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BXENegotiationData.h"
#include "BXEUnlockInstance.h"
#include "DelegateDelegate.h"
#include "ItemSlotIndex.h"
#include "BXENegotiationParticipantComponent.generated.h"

class AFSDPlayerState;
class UBXENegotiationWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBXENegotiationParticipantComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBXENegotiationData NegotiationData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnNegotiationDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBXENegotiationWidget* NegotiationWidget;
    
public:
    UBXENegotiationParticipantComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SelectUnlock(const FBXEUnlockInstance& InUnlock, FItemSlotIndex InUnlockSlot, int32 InUnlockIndex, int32 InDroneUnlockIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestUnlock(int32 InUnlockIndex);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_RecordParticipantCursor(const FVector2D& Pos);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNegotiationWidgetLoadComplete();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetNegotiationData(const FBXENegotiationData& InData);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_ReceiveParticipantCursor(AFSDPlayerState* InPlayer, const FVector2D& InPos);
    
};

