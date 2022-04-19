#pragma once
#include "CoreMinimal.h"
#include "CommunityFactionResponse.generated.h"

USTRUCT()
struct FCommunityFactionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    TArray<FString> Goals;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    TArray<float> Values;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    TArray<float> Members;
    
    FSD_API FCommunityFactionResponse();
};

