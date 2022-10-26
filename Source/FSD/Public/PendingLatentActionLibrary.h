#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "PendingLatentActionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UPendingLatentActionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPendingLatentActionLibrary();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitOneFrame(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
};

