#pragma once
#include "CoreMinimal.h"
#include "ActiveAudioItem.generated.h"

class UAudioComponent;

USTRUCT(BlueprintType)
struct FActiveAudioItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FadeoutDuration;
    
    FSD_API FActiveAudioItem();
};

