#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DebrisItemActorItem.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDebrisItemActorItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> Actor;
    
    UPROPERTY(EditAnywhere)
    float Probability;
    
    FSD_API FDebrisItemActorItem();
};

