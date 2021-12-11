#pragma once
#include "CoreMinimal.h"
#include "FloatPerkActivation.h"
#include "EscapableGrabberEnemyActivation.generated.h"

class AActor;

UCLASS(EditInlineNew)
class UEscapableGrabberEnemyActivation : public UFloatPerkActivation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> EnemyGrabberClass;
    
public:
    UEscapableGrabberEnemyActivation();
};

