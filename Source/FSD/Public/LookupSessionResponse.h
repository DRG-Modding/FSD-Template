#pragma once
#include "CoreMinimal.h"
#include "LookupSessionResponse.generated.h"

USTRUCT()
struct FLookupSessionResponse {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Valid;
    
    UPROPERTY()
    FString LobbyId;
    
    UPROPERTY()
    FString P2PAddr;
    
    UPROPERTY()
    int32 P2PPORT;
    
    FSD_API FLookupSessionResponse();
};

