#pragma once
#include "CoreMinimal.h"
#include "FriendInfo.generated.h"

USTRUCT(BlueprintType)
struct FFriendInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadOnly)
    FString RealName;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsOnline;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsPlaying;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsPlayingThisGame;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsJoinable;
    
    UPROPERTY(BlueprintReadOnly)
    FString sessionId;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasVoiceSupport;
    
    UPROPERTY(BlueprintReadOnly)
    FString PresenceStatus;
    
    FSD_API FFriendInfo();
};

