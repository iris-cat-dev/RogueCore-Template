#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "ItemSlotIndex.h"
#include "WorkbenchUpgradeWidget.h"
#include "WorkbenchItemWidget.generated.h"

class UBXEAttributeUnlock;
class UBXEUnlockBase;
class UBXEUnlockRarity;
class UItemData;
class UObject;
class UUnlockCollectionTag;
class UWorkbenchItemWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UWorkbenchItemWidget : public UWorkbenchUpgradeWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWorkbenchItemDelegate, UWorkbenchItemWidget*, InWidget, UBXEAttributeUnlock*, SelectedUpgrade);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorkbenchItemDelegate OnItemUpgradeSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSlotIndex UnlockSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChoiceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnlockCollectionTag* WorkbenchCollectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance UnlockInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemData* ItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockBase* ItemUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockRarity* Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEAttributeUnlock*> OwnedIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEAttributeUnlock*> AvailableIndices;
    
public:
    UWorkbenchItemWidget();

    UFUNCTION(BlueprintCallable)
    bool SelectItemUpgrade(UObject* InUpgrade);
    
};

