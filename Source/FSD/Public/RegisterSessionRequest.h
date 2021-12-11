#pragma once
#include "CoreMinimal.h"
#include "RegisterSessionRequest.generated.h"

USTRUCT()
struct FRegisterSessionRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString serverName;
    
    UPROPERTY()
    int32 NumPlayers;
    
    UPROPERTY()
    FString LobbyId;
    
    UPROPERTY()
    FString P2PAddr;
    
    UPROPERTY()
    int32 P2PPORT;
    
    FSD_API FRegisterSessionRequest();
};

