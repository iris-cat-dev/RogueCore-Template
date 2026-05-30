#pragma once
#include "CoreMinimal.h"
#include "ShowroomController.h"
#include "Templates/SubclassOf.h"
#include "CharacterShowroomController.generated.h"

class AItem;
class APlayerCharacter;
class UCharacterShowroomController;
class UObject;
class UPlayerCharacterID;
class UShowroomCameraKey;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCharacterShowroomController : public UShowroomController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* CharacterInstance;
    
public:
    UCharacterShowroomController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_CharacterShown();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void PlayShowroomCharacterSpawnMontage(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void PlayShowroomCharacterSelectionMontage(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UPlayerCharacterID* GetShowroomCharacterClass(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipWeaponFromItem(TSubclassOf<AItem> Item);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCharacterShowroomController* DisplayShowroomCharacter(const UObject* WorldContextObject, UPlayerCharacterID* characterID, UShowroomCameraKey* Key, UShowroomCameraKey* zoomInKey, UShowroomCameraKey* zoomOutKey);
    
};

