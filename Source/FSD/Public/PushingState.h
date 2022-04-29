#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "PushingState.generated.h"

class UUseAnimationSetting;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UPushingState : public UCharacterStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUseAnimationSetting* PushingAnimation;
    
public:
    UPushingState();
};

