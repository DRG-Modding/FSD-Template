#pragma once
#include "CoreMinimal.h"
#include "CommunityFactionData.generated.h"

USTRUCT(BlueprintType)
struct FCommunityFactionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool IsValid;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FString> Goals;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<float> Values;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int32> Members;
    
    FSD_API FCommunityFactionData();
};

