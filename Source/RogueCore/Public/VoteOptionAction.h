#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EVoteOptionActionType.h"
#include "VoteOptionAction.generated.h"

class AFSDPlayerState;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UVoteOptionAction : public UObject {
    GENERATED_BODY()
public:
    UVoteOptionAction();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunPersistent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVoteOptionActionType GetVoteOptionActionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyAction(AFSDPlayerState* InPlayerState) const;
    
};

