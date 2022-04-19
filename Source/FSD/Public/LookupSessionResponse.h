#pragma once
#include "CoreMinimal.h"
#include "LookupSessionResponse.generated.h"

USTRUCT()
struct FLookupSessionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    bool Valid;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString P2PAddr;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int32 P2PPORT;
    
    FSD_API FLookupSessionResponse();
};

