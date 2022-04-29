#pragma once
#include "CoreMinimal.h"
#include "AttackerPositioningComponent.h"
#include "PlayerAttackPositionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
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

