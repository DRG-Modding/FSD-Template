#pragma once
#include "CoreMinimal.h"
#include "PropHuntManagerState.generated.h"

USTRUCT(BlueprintType)
struct FPropHuntManagerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveHunters;
    
    FSD_API FPropHuntManagerState();
};

