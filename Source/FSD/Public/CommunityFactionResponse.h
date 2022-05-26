#pragma once
#include "CoreMinimal.h"
#include "CommunityFactionResponse.generated.h"

USTRUCT(BlueprintType)
struct FCommunityFactionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Goals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Members;
    
    FSD_API FCommunityFactionResponse();
};

