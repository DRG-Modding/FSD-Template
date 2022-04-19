#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoftIconWithColor.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSoftIconWithColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Tint;
    
    FSD_API FSoftIconWithColor();
};

