#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "Templates/SubclassOf.h"
#include "PlayerCameraDrone.generated.h"

class AActor;
class ALaserPointerMarker;
class AVanityCharacter;
class UAnimationAsset;
class UPawnMovementComponent;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class APlayerCameraDrone : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnMovementComponent* Movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MenuTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SplineMeshIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CameraDoesShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFollowingPlayerRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FollowPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseFreeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> VanitySpawnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> VanityWeaponSpawnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimationAsset>> VanityCharacterAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedVanityClassIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedVanityAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AVanityCharacter*> VanityCharacterInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AVanityCharacter*> StaticVanityCharacterInstances;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALaserPointerMarker> DroneMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Flare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> BounceFlare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SplineInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SplineMeshInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SplineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PlayerFollowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* WeaponTrackActor;
    
public:
    APlayerCameraDrone(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool ToggleSplineMeshVisibility();
    
    UFUNCTION(BlueprintCallable)
    void SetRotationalPivotToPlayer();
    
    UFUNCTION(BlueprintCallable)
    void SetFlareLightSettings(float Intensity, float Range, float Color);
    
    UFUNCTION(BlueprintCallable)
    bool SetCameraShakeAmount(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBounceFlareLightSettings(float Intensity, float Range, float Color);
    
private:
    UFUNCTION(BlueprintCallable)
    void SaveLightConfig();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetFollowVariables();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllLights();
    
    UFUNCTION(BlueprintCallable)
    void RebindPlayerInputComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnFlareHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
private:
    UFUNCTION(BlueprintCallable)
    void LoadLightConfig();
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector GetFlareLightSettings();
    
    UFUNCTION(BlueprintCallable)
    FVector GetBounceFlareLightSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateHUD();
    
    UFUNCTION(BlueprintCallable)
    void ClearFocusPoint();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_BeginCountdown();
    
};

