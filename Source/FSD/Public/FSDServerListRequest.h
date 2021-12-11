#pragma once
#include "CoreMinimal.h"
#include "FSDServerListRequest.generated.h"

USTRUCT()
struct FFSDServerListRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString AuthenticationTicket;
    
    UPROPERTY()
    FString IgnoreId;
    
    UPROPERTY()
    int32 Distance;
    
    UPROPERTY()
    int32 DRG_PWREQUIRED;
    
    UPROPERTY()
    FString DRG_REGION;
    
    UPROPERTY()
    int32 DRG_VERSION;
    
    UPROPERTY()
    int32 DifficultyBitset;
    
    UPROPERTY()
    int32 MissionSeed;
    
    UPROPERTY()
    int32 GlobalMissionSeed;
    
    UPROPERTY()
    FString SearchString;
    
    UPROPERTY()
    bool DeepDive;
    
    FSD_API FFSDServerListRequest();
};

