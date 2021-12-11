#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "PendingLatentActionLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class UPendingLatentActionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void WaitOneFrame(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UPendingLatentActionLibrary();
};

