#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
#include "Maggot.generated.h"

class USimpleHealthComponent;

UCLASS(Blueprintable)
class AMaggot : public ADeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USimpleHealthComponent* HealthComponent;
    
public:
    AMaggot();
};

