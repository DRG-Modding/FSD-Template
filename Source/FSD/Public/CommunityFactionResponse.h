#pragma once
#include "CoreMinimal.h"
#include "CommunityFactionResponse.generated.h"

USTRUCT()
struct FCommunityFactionResponse {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FString> Goals;
    
    UPROPERTY()
    TArray<float> Values;
    
    UPROPERTY()
    TArray<float> Members;
    
    FSD_API FCommunityFactionResponse();
};

