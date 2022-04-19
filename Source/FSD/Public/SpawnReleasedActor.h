#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SpawnReleasedActor.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class USpawnReleasedActor : public UInterface {
    GENERATED_BODY()
};

class ISpawnReleasedActor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSpawnRelease_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSpawnRelease_Attached(AActor* Parent);
    
};

