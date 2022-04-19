#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StatusEffectsFunctionLibrary.generated.h"

class UStatusEffect;
class UDamageClass;
class AActor;

UCLASS(BlueprintType)
class UStatusEffectsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStatusEffectsFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxResistance(TSubclassOf<UStatusEffect> StatusEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDamageClass* GetDamageClass(TSubclassOf<UStatusEffect> StatusEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanTrigger(TSubclassOf<UStatusEffect> StatusEffect, AActor* OtherActor);
    
};

