#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DelegateDelegate.h"
#include "RewardTreeNode.h"
#include "TreeNodeInteractDelegateDelegate.h"
#include "RewardTreeNodeWidget.generated.h"

class UReward;
class URewardTreeNodeWidget;

UCLASS(Blueprintable, EditInlineNew)
class URewardTreeNodeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartingNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URewardTreeNodeWidget*> ConnectedNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsClickable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTreeNodeInteractDelegate OnClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTreeNodeInteractDelegate OnHover;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTreeNodeInteractDelegate OnUnhovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTreeNodeInteractDelegate OnNodeBought;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate IsEditingChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReward* Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlaceholder;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEditing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> NodeConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBought;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReward* DefaultReward;
    
public:
    URewardTreeNodeWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowDetailsText(bool InShow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSelectedEditor(bool inIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsEditing(bool inIsEditing);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBought(bool inIsBought);
    
    UFUNCTION(BlueprintCallable)
    void SetData(FRewardTreeNode nodeData);
    
    UFUNCTION(BlueprintCallable)
    void SetConnectedWidgets(TArray<URewardTreeNodeWidget*> inConnectedNodes);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void NodeUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void NodeHovered();
    
    UFUNCTION(BlueprintCallable)
    void NodeClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBought();
    
};

