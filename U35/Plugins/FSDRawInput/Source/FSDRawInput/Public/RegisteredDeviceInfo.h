#pragma once
#include "CoreMinimal.h"
#include "RegisteredDeviceInfo.generated.h"

USTRUCT(BlueprintType)
struct FRegisteredDeviceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 Handle;
    
    UPROPERTY(BlueprintReadOnly)
    int32 VendorID;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ProductID;
    
    UPROPERTY(BlueprintReadOnly)
    FString DeviceName;
    
    FSDRAWINPUT_API FRegisteredDeviceInfo();
};

