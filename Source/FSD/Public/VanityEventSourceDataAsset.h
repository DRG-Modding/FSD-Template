#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VanityEventSource.h"
#include "VanityEventSourceDataAsset.generated.h"

UCLASS(Blueprintable)
class UVanityEventSourceDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVanityEventSource EventSource;
    
    UVanityEventSourceDataAsset();
};

