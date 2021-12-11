#pragma once
#include "CoreMinimal.h"
#include "CommunityFactionData.generated.h"

USTRUCT(BlueprintType)
struct FCommunityFactionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool IsValid;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FString> Goals;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<float> Values;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<int32> Members;
    
    FSD_API FCommunityFactionData();
};

