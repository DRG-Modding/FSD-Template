#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Pawn.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "PlayerCameraDrone.generated.h"

class UPrimitiveComponent;
class UAnimationAsset;
class UPawnMovementComponent;
class AActor;
class UCameraComponent;

UCLASS(Abstract)
class APlayerCameraDrone : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPawnMovementComponent* Movement;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    int32 MenuTab;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    bool SplineMeshIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    float SplineSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    float MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    float CameraRoll;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    bool CameraDoesShake;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    bool IsFollowingPlayerRotation;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    FVector FollowPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    bool UseFreeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    bool UseDOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> VanitySpawnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> VanityWeaponSpawnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimationAsset>> VanityCharacterAnimations;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SelectedVanityClassIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SelectedVanityAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Flare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> BounceFlare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SplineMesh;
    
public:
    APlayerCameraDrone();
protected:
    UFUNCTION(BlueprintCallable)
    bool ToggleSplineMeshVisibility();
    
    UFUNCTION(BlueprintCallable)
    void SetRotationalPivotToPlayer();
    
    UFUNCTION(BlueprintCallable)
    void SetFlareLightSettings(float Intensity, float range, float Color);
    
    UFUNCTION(BlueprintCallable)
    bool SetCameraShakeAmount(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBounceFlareLightSettings(float Intensity, float range, float Color);
    
private:
    UFUNCTION(BlueprintCallable)
    void SaveLightConfig();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetFollowVariables();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllLights();
    
    UFUNCTION(BlueprintCallable)
    void OnFlareHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
private:
    UFUNCTION(BlueprintCallable)
    void LoadLightConfig();
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector GetFlareLightSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCameraComponent* GetCamera();
    
    UFUNCTION(BlueprintCallable)
    FVector GetBounceFlareLightSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateHUD();
    
    UFUNCTION(BlueprintCallable)
    void ClearFocusPoint();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BeginCountdown();
    
};

