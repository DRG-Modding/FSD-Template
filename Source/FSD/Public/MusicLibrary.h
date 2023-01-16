#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MusicLibrary.generated.h"

class UMusicCategory;
class USoundCue;

UCLASS(Blueprintable)
class UMusicLibrary : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USoundCue>> MusicCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicCategory* Category;
    
    UMusicLibrary();
};

