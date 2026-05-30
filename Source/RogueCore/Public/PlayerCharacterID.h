#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "Templates/SubclassOf.h"
#include "PlayerCharacterID.generated.h"

class APlayerCharacter;
class UPlayerCharacterData;

UCLASS(Blueprintable)
class ROGUECORE_API UPlayerCharacterID : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APlayerCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnalyticsID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterData* CharacterData;
    
public:
    UPlayerCharacterID();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidCharacterData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterData* GetCharacterData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<APlayerCharacter> GetCharacterClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetCharacterCDO() const;
    
};

