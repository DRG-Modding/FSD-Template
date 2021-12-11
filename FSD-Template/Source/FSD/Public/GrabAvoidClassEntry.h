#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GrabAvoidClassEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FGrabAvoidClassEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(EditAnywhere)
    float DistanceToKeep;
    
    FSD_API FGrabAvoidClassEntry();
};

