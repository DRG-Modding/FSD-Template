#pragma once
#include "CoreMinimal.h"
#include "RegisteredDeviceInfo.generated.h"

USTRUCT(BlueprintType)
struct FRegisteredDeviceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 VendorID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ProductID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString DeviceName;
    
    FSDRAWINPUT_API FRegisteredDeviceInfo();
};

