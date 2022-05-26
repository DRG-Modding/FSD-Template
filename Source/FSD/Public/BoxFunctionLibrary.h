#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BoxFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UBoxFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBoxFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox CreateBoxAt(FVector Location, FVector Size);
    
    UFUNCTION(BlueprintCallable)
    static FVector ClosestPointToBox(FVector Pos, const FBox& Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BoxSize(FBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector BoxExtends(FBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector BoxCenter(FBox Box);
    
};

