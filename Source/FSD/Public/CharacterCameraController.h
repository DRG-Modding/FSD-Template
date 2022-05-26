#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterCameraController.generated.h"

class UCameraComponent;
class APlayerCharacter;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCharacterCameraController : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float targetFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

