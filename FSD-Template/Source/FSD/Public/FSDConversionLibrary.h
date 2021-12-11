#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FSDConversionLibrary.generated.h"

class AActor;
class USceneComponent;

UCLASS(BlueprintType)
class UFSDConversionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector_NetQuantizeNormal VectorToNetQuantizeNormal(FVector Vec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector_NetQuantize VectorToNetQuantize(FVector Vec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector QuatToVector(FQuat Quat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator QuatToRotator(FQuat Quat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector_NetQuantizeNormal QuadToNetQuantizeNormal(FQuat Quat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ComponentToWorldLocation(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ActorToWorldLocation(AActor* Actor);
    
    UFSDConversionLibrary();
};

