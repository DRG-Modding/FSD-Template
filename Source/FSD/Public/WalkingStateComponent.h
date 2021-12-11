#pragma once
#include "CoreMinimal.h"
#include "EInputKeys.h"
#include "CharacterStateComponent.h"
#include "WalkingStateComponent.generated.h"

class APlayerCharacter;
class UAudioComponent;
class USoundBase;
class UTrackBuilderMovement;

UCLASS(MinimalAPI)
class UWalkingStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool SlidingEnabled;
    
    UPROPERTY(EditAnywhere)
    bool ShowDebug;
    
    UPROPERTY(EditAnywhere)
    float SlideAngle;
    
    UPROPERTY(EditAnywhere)
    float SlideAcceleration;
    
    UPROPERTY(EditAnywhere)
    float MaxSlideSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxClimbDistance;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AudioSliding;
    
    UPROPERTY(EditAnywhere)
    USoundBase* IceSliding;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* AudioComponentSliding;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* AudioComponentIceSliding;
    
    UFUNCTION(BlueprintCallable)
    void TrackGrindCallback(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartTrackMovement(UTrackBuilderMovement* InMovement);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIsSliding(bool isSliding);
    
public:
    UFUNCTION(BlueprintCallable)
    void JumpPress();
    
    UWalkingStateComponent();
};

