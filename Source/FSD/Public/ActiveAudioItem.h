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
    
    UPROPERTY(EditAnywhere, Transient)
    float FadeoutDuration;
    
    FSD_API FActiveAudioItem();
};

