#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DamageFunctionLibrary.generated.h"

class UDamageClass;
class UDamageTag;

UCLASS(BlueprintType)
class UDamageFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCorrosiveDeath(UDamageClass* DamageClass, const TArray<UDamageTag*>& Tags);
    
    UDamageFunctionLibrary();
};

