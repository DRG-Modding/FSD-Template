#pragma once
#include "CoreMinimal.h"
#include "CommunityGoalRequest.generated.h"

USTRUCT()
struct FCommunityGoalRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString GoalID;
    
    UPROPERTY()
    int32 FactionID;
    
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    FString SteamTicket;
    
    UPROPERTY()
    FString Branch;
    
    FSD_API FCommunityGoalRequest();
};

