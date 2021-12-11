#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Interface.h"
#include "LoadoutItem.generated.h"

class AItem;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class ULoadoutItem : public UInterface {
    GENERATED_BODY()
};

class ILoadoutItem : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual TSubclassOf<AItem> GetLoadoutItemClass() const PURE_VIRTUAL(GetLoadoutItemClass, return NULL;);
    
};

