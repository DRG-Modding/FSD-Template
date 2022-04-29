#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
//#include "ModioModID.h"
#include "ModioCreateModFileMemoryParams.h"
#include "Types/ModioCommonTypes.h"
#include "ModioSubmissionExtensionLibrary.generated.h"

class UModioSubsystem;

UCLASS(Blueprintable)
class UModioSubmissionExtensionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioSubmissionExtensionLibrary();
    UFUNCTION(BlueprintCallable)
    static void K2_SubmitNewModFileForModFromMemory(UModioSubsystem* Target, FModioModID Mod, FModioCreateModFileMemoryParams Params);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_LoadModFileToMemory(UModioSubsystem* Target, FModioModID ModId, TArray<uint8>& ModData);
    
};

