#pragma once
#include "CoreMinimal.h"
#include "RegisterSessionRequest.generated.h"

USTRUCT(BlueprintType)
struct FRegisterSessionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ServerName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 NumPlayers;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString P2PAddr;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 P2PPORT;
    
    FSD_API FRegisterSessionRequest();
};

