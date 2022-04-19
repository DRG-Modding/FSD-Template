#pragma once
#include "CoreMinimal.h"
#include "VanityEventSource.h"
#include "Engine/DataAsset.h"
#include "VanityEventSourceDataAsset.generated.h"

UCLASS(BlueprintType)
class UVanityEventSourceDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVanityEventSource EventSource;
    
    UVanityEventSourceDataAsset();
};

