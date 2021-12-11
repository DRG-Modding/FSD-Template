#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "PushingState.generated.h"

class UUseAnimationSetting;

UCLASS()
class FSD_API UPushingState : public UCharacterStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UUseAnimationSetting* PushingAnimation;
    
public:
    UPushingState();
};

