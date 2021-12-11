#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_Shout.generated.h"

class UDialogDataAsset;

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_Shout : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* Shout;
    
    UPROPERTY(EditAnywhere)
    bool ShoutNetworked;
    
    UPROPERTY(EditAnywhere)
    float LocalShoutVolumeMultiplier;
    
    UAnimNotify_Shout();
};

