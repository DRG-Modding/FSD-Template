#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ActionIconMapping.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FActionIconMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey ActionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoNotTint;
    
    FSD_API FActionIconMapping();
};

