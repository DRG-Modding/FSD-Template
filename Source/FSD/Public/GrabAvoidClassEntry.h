#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GrabAvoidClassEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FGrabAvoidClassEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToKeep;
    
    FSD_API FGrabAvoidClassEntry();
};

