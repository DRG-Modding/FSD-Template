#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterCameraController.generated.h"

class APlayerCharacter;
class UCameraComponent;

UCLASS(BlueprintType, MinimalAPI, meta=(BlueprintSpawnableComponent))
class UCharacterCameraController : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float StartFOV;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float targetFov;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TargetFOVSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
public:
    UCharacterCameraController();
    UFUNCTION(BlueprintCallable)
    void ResetFOV(float FadeSpeed);
    
    UFUNCTION(BlueprintCallable)
    void FOVChanged(float NewFOV);
    
    UFUNCTION(BlueprintCallable)
    void FadeToFOVRelative(float NewTargetFov, float FadeSpeed);
    
    UFUNCTION(BlueprintCallable)
    void FadeToFOV(float NewTargetFov, float FadeSpeed);
    
};

