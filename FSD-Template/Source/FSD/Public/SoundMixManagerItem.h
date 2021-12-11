#pragma once
#include "CoreMinimal.h"
#include "SoundMixManagerItem.generated.h"

class USoundMix;

USTRUCT(BlueprintType)
struct FSoundMixManagerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    USoundMix* mix;
    
    FSD_API FSoundMixManagerItem();
};

