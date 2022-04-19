#pragma once
#include "CoreMinimal.h"
#include "FSDServerListRequest.generated.h"

USTRUCT()
struct FFSDServerListRequest {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString AuthenticationTicket;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString IgnoreId;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int32 Distance;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int32 DRG_PWREQUIRED;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString DRG_REGION;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int32 DRG_VERSION;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int32 DifficultyBitset;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int32 MissionSeed;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int32 GlobalMissionSeed;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString SearchString;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    bool DeepDive;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString Platform;
    
    FSD_API FFSDServerListRequest();
};

