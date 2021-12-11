#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterCameraController.generated.h"

class APlayerCharacter;
class UCameraComponent;

UCLASS(BlueprintType, MinimalAPI)
class UCharacterCameraController : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    float StartFOV;
    
    UPROPERTY(BlueprintReadOnly)
    float targetFov;
    
    UPROPERTY(BlueprintReadOnly)
    float TargetFOVSpeed;
    
private:
    UPROPERTY()
    APlayerCharacter* Character;
    
    UPROPERTY(Export)
    UCameraComponent* Camera;
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetFOV(float FadeSpeed);
    
    UFUNCTION(BlueprintCallable)
    void FOVChanged(float NewFOV);
    
    UFUNCTION(BlueprintCallable)
    void FadeToFOVRelative(float NewTargetFov, float FadeSpeed);
    
    UFUNCTION(BlueprintCallable)
    void FadeToFOV(float NewTargetFov, float FadeSpeed);
    
    UCharacterCameraController();
};

