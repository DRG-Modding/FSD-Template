#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EnemyPlaySoundByKeyAnimNotify.generated.h"

class UEnemyPlaySoundKey;

UCLASS(CollapseCategories, MinimalAPI)
class UEnemyPlaySoundByKeyAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UEnemyPlaySoundKey* SoundKey;
    
    UPROPERTY(EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(EditAnywhere)
    FName AttachName;
    
public:
    UEnemyPlaySoundByKeyAnimNotify();
};

