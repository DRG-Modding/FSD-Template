#pragma once
#include "CoreMinimal.h"
#include "NetworkConnectionInfo.generated.h"

class AFSDPlayerController;

USTRUCT(BlueprintType)
struct FNetworkConnectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFSDPlayerController* PlayerController;
    
    UPROPERTY(EditAnywhere, Transient)
    float PacketLossIn;
    
    UPROPERTY(EditAnywhere, Transient)
    float PacketLossOut;
    
    UPROPERTY(EditAnywhere, Transient)
    float Ping;
    
    UPROPERTY(EditAnywhere, Transient)
    float Jitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsValid;
    
    FSD_API FNetworkConnectionInfo();
};

