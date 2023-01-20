#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IRandRange.h"
#include "RandRange.h"
#include "RandRangeFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class URandRangeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URandRangeFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TryPickRandomText(const TArray<FText>& TextArray, UPARAM(Ref) FRandomStream& RandomStream, FText& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText PickRandomText(const TArray<FText>& TextArray, UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetValueFromStream(FIRandRange RandRange, UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatValue(FRandRange RandRange);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatFromStream(FRandRange RandRange, UPARAM(Ref) FRandomStream& RandomStream);
    
};

