#pragma once
#include "CoreMinimal.h"
#include "HoldButton.generated.h"

USTRUCT(BlueprintType)
struct FHoldButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HoldingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldDuration;
    
public:
    FSD_API FHoldButton();
};

