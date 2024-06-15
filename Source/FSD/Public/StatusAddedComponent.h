#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StatusAddedComponent.generated.h"

class AActor;
class UStatusEffect;

UINTERFACE(Blueprintable, MinimalAPI)
class UStatusAddedComponent : public UInterface {
    GENERATED_BODY()
};

class IStatusAddedComponent : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeEffect(UStatusEffect* Effect, AActor* EffectOwner);
    
};

