#pragma once
#include "CoreMinimal.h"
#include "ActiveAudioItem.generated.h"

class UAudioComponent;

USTRUCT(BlueprintType)
struct FActiveAudioItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* Audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FadeoutDuration;
    
    FSD_API FActiveAudioItem();
};

