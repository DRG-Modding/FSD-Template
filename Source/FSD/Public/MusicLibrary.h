#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MusicLibrary.generated.h"

class USoundCue;
class UMusicCategory;

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

