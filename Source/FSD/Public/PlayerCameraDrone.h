#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Pawn.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "PlayerCameraDrone.generated.h"

class UPawnMovementComponent;
class AActor;
class UPrimitiveComponent;
class UCameraComponent;

UCLASS(Abstract)
class APlayerCameraDrone : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UPawnMovementComponent* Movement;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    int32 MenuTab;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool SplineMeshIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float SplineSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float CameraRoll;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool CameraDoesShake;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool IsFollowingPlayerRotation;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FVector FollowPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool UseFreeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool UseDOF;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> VanitySpawnable;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> Flare;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> BounceFlare;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> Spline;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> SplineMesh;
    
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
    
public:
    APlayerCameraDrone();
};

