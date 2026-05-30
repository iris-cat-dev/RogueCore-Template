#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EHeadVanityType.h"
#include "EVanitySlot.h"
#include "EquippedVanity.h"
#include "TattooArmorItem.h"
#include "CharacterVanityComponent.generated.h"

class UArmorMaterialVanityItem;
class UBeardColorVanityItem;
class UCharacterVanityItems;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class UPlayerCharacterID;
class USkeletalMeshComponent;
class UVanityItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCharacterVanityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterVanityChangedDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBeardColorVanityItem* ShownBeardColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ArmorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* UndersuitMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GauntletMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ArmorClothMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicSkinMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHeadVanityType HeadVanityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EquippedVanity, meta=(AllowPrivateAccess=true))
    FEquippedVanity EquippedVanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVanityItem* PreviewedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UArmorMaterialVanityItem* PreviewedArmorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SkinMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTattooArmorItem> Tattoos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CachedMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GuantletsAreVisible, meta=(AllowPrivateAccess=true))
    bool GuantletsAreVisible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterVanityChangedDelegate OnEquippedVanityChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<EVanitySlot, USkeletalMeshComponent*> VanityMeshes;
    
public:
    UCharacterVanityComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void UpdateMeshes();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateEquippedVanity(bool applyItems);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedVanityInViewer(const FEquippedVanity& equippedVanityItems);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDesireSleevelessArmor(UObject* WorldContextObject, UPlayerCharacterID* Character, bool inDesireSleeveless);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetEquippedVanity(const FEquippedVanity& equippedItems);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveMedicalGown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UVanityItem* Receive_GetEquippedVanityItem(UObject* WorldContextObject, UPlayerCharacterID* Character, EVanitySlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool Receive_GetDesireSleevelessArmor(UObject* WorldContextObject, UPlayerCharacterID* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GuantletsAreVisible();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EquippedVanity();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasSpawnedInMedbay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetGauntletMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVanityItem* GetEquippedVanityItem(EVanitySlot Slot, bool ignorePreviewItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDesireSleevelessArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterVanityItems* GetAvailableVanityItems() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EquipMedicalGown();
    
    UFUNCTION(BlueprintCallable)
    void EnforceValidPaintjob();
    
    UFUNCTION(BlueprintCallable)
    void CreateEquippedGear();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RemoveMedicalGown();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_EquipMedicalGown();
    
};

