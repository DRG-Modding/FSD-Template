#pragma once
#include "CoreMinimal.h"
#include "IKLegSetup.generated.h"

USTRUCT(BlueprintType)
struct FIKLegSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndBone;
    
    FSD_API FIKLegSetup();
};

