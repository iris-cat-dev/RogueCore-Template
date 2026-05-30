#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Templates/SubclassOf.h"
#include "CrosshairExtensionComponent.generated.h"

class UCrosshairExtensionWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCrosshairExtensionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCrosshairExtensionWidgetDelegate, TSubclassOf<UCrosshairExtensionWidget>, WidgetClass, UCrosshairExtensionWidget*, Widget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCrosshairExtensionClassDelegate, TSubclassOf<UCrosshairExtensionWidget>, WidgetClass);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrosshairExtensionClassDelegate OnExtensionClassAddedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrosshairExtensionClassDelegate OnExtensionClassRemovedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrosshairExtensionWidgetDelegate OnExtensionCreatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrosshairExtensionWidgetDelegate OnExtensionRemovedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCrosshairExtensionWidget>> ExtensionClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UCrosshairExtensionWidget>, UCrosshairExtensionWidget*> Extensions;
    
public:
    UCrosshairExtensionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveExtensionClass(const TSubclassOf<UCrosshairExtensionWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void RemoveExtension(UCrosshairExtensionWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UCrosshairExtensionWidget*> GetExtensions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UCrosshairExtensionWidget>> GetExtensionClasses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCrosshairExtensionWidget* FindExtension(const TSubclassOf<UCrosshairExtensionWidget> WidgetClass) const;
    
    UFUNCTION(BlueprintCallable)
    void AddExtensionClass(const TSubclassOf<UCrosshairExtensionWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void AddExtension(UCrosshairExtensionWidget* Widget);
    
};

