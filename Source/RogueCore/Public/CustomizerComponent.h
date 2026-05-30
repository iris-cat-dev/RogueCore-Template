#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SaveGameIDInterface.h"
#include "CustomizerComponent.generated.h"

class UCustomizationDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCustomizerComponent : public UActorComponent, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomizationDataAsset*> CompatibleCustomizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizationDataAsset* DefaultCustomizationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OptionReplicatedFromHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HostCustomizationGuid, meta=(AllowPrivateAccess=true))
    FGuid HostCustomizationGuid;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
public:
    UCustomizerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HostCustomizationGuid();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetSaveGameID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UCustomizationDataAsset*> GetCompatibleCustomizations() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyCustomizationAsync(UCustomizationDataAsset* CustomizationData, bool IsChangedLocally);
    

    // Fix for true pure virtual functions not being implemented
};

