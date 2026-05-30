#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CarriableChangedDelegateDelegate.h"
#include "EItemCategory.h"
#include "FlareProductionDelegateDelegate.h"
#include "FlareThrownDelegateDelegate.h"
#include "FlaresDelegateDelegate.h"
#include "GrenadesDelegateDelegate.h"
#include "InventoryBase.h"
#include "InventoryComponentItemChangeDelegate.h"
#include "InventoryId.h"
#include "InventoryItemsLoadedDelegate.h"
#include "ItemDelegateDelegate.h"
#include "ItemSlot.h"
#include "ItemSlotIndex.h"
#include "ResupplyDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "InventoryComponent.generated.h"

class AActor;
class AFlare;
class AItem;
class ALaserPointerItem;
class APickaxeItem;
class ARecallableSentryGunItem;
class ARessuplyPodItem;
class ATerrainScannerItem;
class AThrownGrenadeItem;
class UDialogDataAsset;
class UInventoryList;
class UItemID;
class UItemUpgrade;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInventoryComponent : public UInventoryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryItemsLoaded OnItemsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDelegate OnItemClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDelegate OnItemEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDelegate OnItemUnequipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryComponentItemChange OnEquippedItemChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDelegate OnItemAddedToInventory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrenadesDelegate OnGrenadeCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlaresDelegate OnFlareCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlareThrownDelegate OnFlareThrownServer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlaresDelegate OnMaxFlareCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlareProductionDelegate OnFlareProduction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResupplyDelegate OnResuppliedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarriableChangedDelegate OnCarriableChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInventoryList* InventoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AThrownGrenadeItem> ThrownGrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrenadeSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> AmmoBagClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FlareClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFlare> flareClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FlareOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OutOfFlaresSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* OutOfFlaresShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlareAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlareCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FlareProductionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor FlareChromaColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FlareProductionTimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxFlares;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Flares;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FlareCooldownRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> FlareUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bItemsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APickaxeItem* MiningItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AThrownGrenadeItem* GrenadeItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALaserPointerItem* LaserPointerItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATerrainScannerItem* TerrainScannerItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARessuplyPodItem* ResupplyItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARecallableSentryGunItem* RecallableSentryGunItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* AmmoBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemSlots, meta=(AllowPrivateAccess=true))
    TArray<FItemSlot> ItemSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnAmmoBagOnInit;
    
public:
    UInventoryComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ThrowItem(FVector Force, bool PlayMontage);
    
    UFUNCTION(BlueprintCallable)
    void SwapItems(AItem* A, AItem* B);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ThrowItem(AActor* Item, FVector Force, bool PlayMontage);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ThrowFlare();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SwapItems(AItem* A, AItem* B);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetSlotItemId(FItemSlotIndex Slot, FInventoryId ID);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveItem(AItem* A);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Resupply(float percentage);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(AItem* A);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PickupItemInstance(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    AItem* PickupItem(TSubclassOf<AItem> itemClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemSlots();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FlareClass();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTerrainScannerEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPickedUpItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDrink() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItem* GetSlotItem(const FItemSlotIndex& Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSlotCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARecallableSentryGunItem* GetRecallableSentryGunItem() const;
    
    UFUNCTION(BlueprintCallable)
    AItem* GetOrCreateUnlistedItem(TSubclassOf<AItem> ItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSlotsInUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetModifiableItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AItem*> GetItemsInSlot(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItem* GetFirstItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetEquippedSlotIndices(bool InIncludeGrenades, bool InIncludeAmmoBags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemID* GetEquippedItemID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItem* GetEquippedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItem* GetCurrentItemInSlot(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemID* GetCurrentItemIDInSlot(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCarriedItem() const;
    
    UFUNCTION(BlueprintCallable)
    AItem* FindFirstItemOfCategory(EItemCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void EquipPrevious();
    
    UFUNCTION(BlueprintCallable)
    void EquipOrCycleSlot(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void EquipNext();
    
    UFUNCTION(BlueprintCallable)
    void Equip(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void DropPickedupItem();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetSlotItemId(FItemSlotIndex Slot, FInventoryId ID);
    
public:
    UFUNCTION(BlueprintCallable)
    void AnimationNotify2();
    
    UFUNCTION(BlueprintCallable)
    void AnimationNotify1();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_PlayThrowMontage(AActor* Item);
    
public:
    UFUNCTION(BlueprintCallable)
    AItem* AddItemToSlot(UItemID* ItemID, FItemSlotIndex Slot);
    
    UFUNCTION(BlueprintCallable)
    void AddItemClass(TSubclassOf<AItem> itemClass);
    
};

