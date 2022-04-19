#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DebrisItemActorItem.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDebrisItemActorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    FSD_API FDebrisItemActorItem();
};

