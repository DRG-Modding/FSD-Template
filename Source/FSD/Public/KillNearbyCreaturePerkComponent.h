#pragma once
#include "CoreMinimal.h"
#include "FloatPerkComponent.h"
#include "KillNearbyCreaturePerkComponent.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKillNearbyCreaturePerkComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> EnemyClass;
    
public:
    UKillNearbyCreaturePerkComponent();
};

