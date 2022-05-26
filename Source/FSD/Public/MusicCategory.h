#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MusicCategory.generated.h"

UCLASS(Blueprintable)
class UMusicCategory : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDuration;
    
    UMusicCategory();
};

