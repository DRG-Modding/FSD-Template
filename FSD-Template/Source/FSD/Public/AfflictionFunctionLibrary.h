#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AfflictionFunctionLibrary.generated.h"

class AFSDPawn;

UCLASS(BlueprintType)
class UAfflictionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void PlayEnemyExplosionEffects(AFSDPawn* enemy);
    
    UAfflictionFunctionLibrary();
};

