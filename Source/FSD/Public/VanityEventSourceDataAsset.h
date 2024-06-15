#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VanityEventSource.h"
#include "VanityEventSourceDataAsset.generated.h"

class UTagVanityGeneral;

UCLASS(Blueprintable)
class UVanityEventSourceDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVanityEventSource EventSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UTagVanityGeneral*> VanityTags;
    
    UVanityEventSourceDataAsset();

};

