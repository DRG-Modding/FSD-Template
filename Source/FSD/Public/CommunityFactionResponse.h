#pragma once
#include "CoreMinimal.h"
#include "CommunityFactionResponse.generated.h"

USTRUCT(BlueprintType)
struct FCommunityFactionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Goals;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Values;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Members;
    
    FSD_API FCommunityFactionResponse();
};

