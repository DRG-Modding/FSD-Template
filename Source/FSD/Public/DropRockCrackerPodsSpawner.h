#pragma once
#include "CoreMinimal.h"
#include "DebrisLocationFinder.h"
#include "DropRockCrackerPodsSpawner.generated.h"

class AActor;
class APlagueMeteor;

UCLASS(Blueprintable)
class ADropRockCrackerPodsSpawner : public ADebrisLocationFinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlagueMeteor* meteor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APlagueMeteor> MeteorActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> RockCrackerIndicationClass;
    
public:
    ADropRockCrackerPodsSpawner();
};

