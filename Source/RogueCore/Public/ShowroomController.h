#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ShowroomController.generated.h"

class AActor;
class AShowroomItem;
class AShowroomStage;
class UAudioComponent;
class UObject;
class UShowroomController;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UShowroomController : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AShowroomStage* Stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsZoomedIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ZoomInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SceneCaptureTargetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AShowroomItem* ShowroomItemInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationDividerInDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationAveragingWindowInSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* SpeedNotifierAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SpeedNotifierParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SmoothedRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LastCameraRotation;
    
public:
    UShowroomController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ZoomShowroom(float Distance, bool instantZoom);
    
    UFUNCTION(BlueprintCallable)
    void ToggleZoom();
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedAudioNotifier(UAudioComponent* AudioComponent, const FName AudioParameterName);
    
    UFUNCTION(BlueprintCallable)
    void SetShowroomRotation(const FRotator NewRotation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetLightChannels(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void RotateShowroom(float pitch, float Yaw);
    
    UFUNCTION(BlueprintCallable)
    void ResetShowroomRotation();
    
    UFUNCTION(BlueprintCallable)
    FRotator GetShowroomRotation();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UShowroomController* DisplayShowroomItem(UObject* WorldContextObject, TSoftClassPtr<AShowroomItem> showroomItemActor);
    
};

