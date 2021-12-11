#pragma once
#include "CoreMinimal.h"
#include "MusicHandle.h"
#include "ActiveMusicItem.generated.h"

class USoundBase;
class UMusicCategory;

USTRUCT(BlueprintType)
struct FActiveMusicItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    USoundBase* Sound;
    
    UPROPERTY(Transient)
    float StartingTime;
    
    UPROPERTY(Transient)
    float FadeDuration;
    
    UPROPERTY(Transient)
    bool Looping;
    
    UPROPERTY(NotReplicated, Transient)
    FMusicHandle Handle;
    
    UPROPERTY(NotReplicated, Transient)
    UMusicCategory* Category;
    
    FSD_API FActiveMusicItem();
};

