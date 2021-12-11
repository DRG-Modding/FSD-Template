#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MusicLibrary.generated.h"

class UMusicCategory;
class USoundCue;

UCLASS()
class UMusicLibrary : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<USoundCue*> MusicCues;
    
    UPROPERTY(EditAnywhere)
    UMusicCategory* Category;
    
    UMusicLibrary();
};

