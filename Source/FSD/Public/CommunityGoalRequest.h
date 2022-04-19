#pragma once
#include "CoreMinimal.h"
#include "CommunityGoalRequest.generated.h"

USTRUCT()
struct FCommunityGoalRequest {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString GoalID;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int32 FactionID;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString SteamTicket;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString Branch;
    
    FSD_API FCommunityGoalRequest();
};

