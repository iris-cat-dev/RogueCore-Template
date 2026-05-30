#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "ActionIconMapping.h"
#include "ActionIconMappingPtr.h"
#include "InputTranslationTable.h"
#include "ControllerIconSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UControllerIconSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputTranslationTable InputTranslationTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionIconMappingPtr> Xbox_KeyIcons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionIconMappingPtr> Playstation_KeyIcons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionIconMappingPtr> Playstation5_KeyIcons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionIconMappingPtr> MouseKeyboard_KeyIcons;
    
public:
    UControllerIconSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindMouseKeyboardKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindControllerKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    
};

