#pragma once
#include "CoreMinimal.h"
#include "SoundMixManagerItem.generated.h"

class USoundMix;

USTRUCT(BlueprintType)
struct FSoundMixManagerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundMix* mix;
    
    FSD_API FSoundMixManagerItem();
};

