#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CritterManager.generated.h"

UCLASS()
class UCritterManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool DisableCritters;
    
    UPROPERTY(EditAnywhere)
    float ActivationRange;
    
public:
    UCritterManager();
};

