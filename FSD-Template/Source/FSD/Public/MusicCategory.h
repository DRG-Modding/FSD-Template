#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MusicCategory.generated.h"

UCLASS()
class UMusicCategory : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FadeDuration;
    
    UMusicCategory();
};

