#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_PushSoundMix.generated.h"

class USoundMix;

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_PushSoundMix : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* SoundMix;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UAnimNotify_PushSoundMix();
};

