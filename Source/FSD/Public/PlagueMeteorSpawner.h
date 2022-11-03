#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "DebrisLocationFinder.h"
#include "PlagueMeteorSpawner.generated.h"

class APlagueMeteor;

UCLASS(Abstract, Blueprintable)
class APlagueMeteorSpawner : public ADebrisLocationFinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APlagueMeteor> MeteorActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange EscortSpawnFromMuleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortSpawnFromImportantRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MeteorActorClassLoaded;
    
public:
    APlagueMeteorSpawner();
};

