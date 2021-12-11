#pragma once
#include "CoreMinimal.h"
#include "FloatPerkComponent.h"
#include "KillNearbyCreaturePerkComponent.generated.h"

class AActor;

UCLASS(Abstract)
class UKillNearbyCreaturePerkComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> EnemyClass;
    
public:
    UKillNearbyCreaturePerkComponent();
};

