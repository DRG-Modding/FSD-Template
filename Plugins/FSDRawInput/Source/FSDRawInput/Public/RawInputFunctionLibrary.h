#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RegisteredDeviceInfo.h"
#include "RawInputFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class URawInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URawInputFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
    
};

