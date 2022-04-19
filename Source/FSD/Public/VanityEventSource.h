#pragma once
#include "CoreMinimal.h"
#include "VanityEventSource.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVanityEventSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EventIcon;
    
    FSD_API FVanityEventSource();
};

