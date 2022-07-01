#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "EInputKeys.h"
#include "WalkingStateComponent.generated.h"

class APlayerCharacter;
class USoundBase;
class UAudioComponent;
class UTrackBuilderMovement;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWalkingStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SlidingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxClimbDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioSliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* IceSliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentSliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentIceSliding;
    
public:
    UWalkingStateComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void TrackGrindCallback(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartTrackMovement(UTrackBuilderMovement* InMovement);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIsSliding(bool isSliding);
    
public:
    UFUNCTION(BlueprintCallable)
    void JumpPress();
    
};

