#pragma once
#include "CoreMinimal.h"
#include "NetworkConnectionInfo.generated.h"

class AFSDPlayerController;

USTRUCT(BlueprintType)
struct FNetworkConnectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AFSDPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float PacketLossIn;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float PacketLossOut;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float Ping;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float Jitter;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsValid;
    
    FSD_API FNetworkConnectionInfo();
};

