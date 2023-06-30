#pragma once
#include "CoreMinimal.h"
#include "TentacleTarget.h"
#include "TerminatorTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTerminatorTarget : public FTentacleTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
    FSD_API FTerminatorTarget();
};

