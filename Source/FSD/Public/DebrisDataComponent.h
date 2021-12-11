#pragma once
#include "CoreMinimal.h"
#include "DebrisActorComponent.h"
#include "DebrisDataComponent.generated.h"

class UDebrisBase;

UCLASS(BlueprintType)
class UDebrisDataComponent : public UDebrisActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UDebrisBase* Debris;
    
    UDebrisDataComponent();
};

