#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotifyState_EnemyPlaySoundByKey.generated.h"

class UEnemyPlaySoundKey;

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_EnemyPlaySoundByKey : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEnemyPlaySoundKey* SoundKey;
    
    UPROPERTY(EditAnywhere)
    float FadeOut;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
    UAnimNotifyState_EnemyPlaySoundByKey();
};

