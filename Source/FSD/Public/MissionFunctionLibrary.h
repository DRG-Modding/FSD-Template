#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MissionFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class FSD_API UMissionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMissionFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static int32 GetGlobalMissionSeed();
    
};

