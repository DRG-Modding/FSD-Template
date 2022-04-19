#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObjectiveMissionIcon.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FObjectiveMissionIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Tint;
    
    FSD_API FObjectiveMissionIcon();
};

