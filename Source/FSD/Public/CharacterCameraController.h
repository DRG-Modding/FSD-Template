#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterCameraController.generated.h"

class APlayerCharacter;
class UCameraComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCharacterCameraController : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float StartFOV;
    
    UPROPERTY(EditAnywhere)
    float targetFov;
    
    UPROPERTY(EditAnywhere)
    float TargetFOVSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
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

