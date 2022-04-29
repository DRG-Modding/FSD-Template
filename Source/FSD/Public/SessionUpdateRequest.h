#pragma once
#include "CoreMinimal.h"
#include "SessionUpdateRequest.generated.h"

USTRUCT(BlueprintType)
struct FSessionUpdateRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPlayers;
    
    FSD_API FSessionUpdateRequest();
};

