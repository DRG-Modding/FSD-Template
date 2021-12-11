#pragma once
#include "CoreMinimal.h"
#include "AttackerPositioningComponent.h"
#include "PlayerAttackPositionComponent.generated.h"

UCLASS()
class UPlayerAttackPositionComponent : public UAttackerPositioningComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float OnZiplineFlyingModifier;
    
    UPROPERTY(EditAnywhere)
    float OnZiplineWalkingModifier;
    
public:
    UPlayerAttackPositionComponent();
};

