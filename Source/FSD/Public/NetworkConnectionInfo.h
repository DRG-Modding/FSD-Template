#pragma once
#include "CoreMinimal.h"
#include "NetworkConnectionInfo.generated.h"

class AFSDPlayerController;

USTRUCT(BlueprintType)
struct FNetworkConnectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    AFSDPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PacketLossIn;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PacketLossOut;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Ping;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Jitter;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsValid;
    
    FSD_API FNetworkConnectionInfo();
};

