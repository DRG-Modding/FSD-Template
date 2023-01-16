#pragma once
#include "CoreMinimal.h"
#include "RegisteredDeviceInfo.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RawInputFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class URawInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URawInputFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
    
};

