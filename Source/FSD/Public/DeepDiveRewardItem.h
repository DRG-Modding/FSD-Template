#pragma once
#include "CoreMinimal.h"
#include "DeepDiveRewardItem.generated.h"

class USchematic;

USTRUCT(BlueprintType)
struct FDeepDiveRewardItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USchematic* Schematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool WasAlreadyGiven;
    
    FSD_API FDeepDiveRewardItem();
};

