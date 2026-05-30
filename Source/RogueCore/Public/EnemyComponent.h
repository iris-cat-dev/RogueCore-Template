#pragma once
#include "CoreMinimal.h"
#include "SimpleObjectInfoComponent.h"
#include "EnemyComponent.generated.h"

class UDialogDataAsset;
class UEnemyFamily;
class UEnemyID;
class UMissionStat;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnemyComponent : public USimpleObjectInfoComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyFamily* Family;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* KillShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyID* EnemyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStat* KillStat;
    
public:
    UEnemyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UEnemyID* GetID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFamilyName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetFamilyIcon() const;
    
};

