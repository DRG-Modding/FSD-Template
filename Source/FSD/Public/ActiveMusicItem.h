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
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float StartingTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float FadeDuration;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool Looping;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    FMusicHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UMusicCategory* Category;
    
    FSD_API FActiveMusicItem();
};

