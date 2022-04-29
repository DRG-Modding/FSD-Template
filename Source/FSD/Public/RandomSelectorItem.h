#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "RandomSelectorItem.generated.h"

UCLASS(Blueprintable)
class ARandomSelectorItem : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    ARandomSelectorItem();
};

