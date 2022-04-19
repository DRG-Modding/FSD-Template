#pragma once
#include "CoreMinimal.h"
#include "RegisteredDeviceInfo.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RawInputFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class URawInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
    
    URawInputFunctionLibrary();
};

