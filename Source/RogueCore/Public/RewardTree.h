#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "RewardTreeLock.h"
#include "RewardTreeNode.h"
#include "SavableDataAsset.h"
#include "RewardTree.generated.h"

class UReward;

UCLASS(Blueprintable, EditInlineNew)
class URewardTree : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRewardTreeNode> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRewardTreeLock> Locks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> NodeIDToArrayIndex;
    
    URewardTree();

    UFUNCTION(BlueprintCallable)
    void ClearNodes();
    
    UFUNCTION(BlueprintCallable)
    void AddNode(UReward* Reward, int32 Cost, int32 NodeID, TArray<int32> ConnectedNodes, bool isStartingNode, bool isBig, FVector2D position);
    
    UFUNCTION(BlueprintCallable)
    void AddLock(int32 RequiredNodesToBuy, int32 MeritPointCost, FVector2D position);
    
};

