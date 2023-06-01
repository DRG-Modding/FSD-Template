#pragma once
#include "CoreMinimal.h"
#include "IRandRange.h"
#include "JettyBootSetting.generated.h"

USTRUCT(BlueprintType)
struct FJettyBootSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange GateCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange GateSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange GateOpeningSize;
    
    FSD_API FJettyBootSetting();
};

