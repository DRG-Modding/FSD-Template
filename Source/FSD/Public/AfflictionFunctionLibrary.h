#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AfflictionFunctionLibrary.generated.h"

class AFSDPawn;

UCLASS(Blueprintable)
class UAfflictionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAfflictionFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void PlayEnemyExplosionEffects(AFSDPawn* enemy);
    
};

