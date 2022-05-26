#pragma once
#include "CoreMinimal.h"
#include "DeepDiveTesterItem.generated.h"

class UMissionWarning;
class UMissionTemplate;
class UMissionMutator;

USTRUCT(BlueprintType)
struct FDeepDiveTesterItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionTemplate* mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionMutator* Mutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionWarning* Warning;
    
    FSD_API FDeepDiveTesterItem();
};

