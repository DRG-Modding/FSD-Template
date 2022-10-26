#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DeepDiveTesterItem.generated.h"

class UMissionTemplate;
class UMissionComplexity;
class UMissionDuration;
class UObjective;
class UMissionMutator;
class UMissionWarning;

USTRUCT(BlueprintType)
struct FDeepDiveTesterItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionComplexity* Complexity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionDuration* Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionTemplate* mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UObjective> DeepDiveObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionMutator* Mutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionWarning* Warning;
    
    FSD_API FDeepDiveTesterItem();
};

