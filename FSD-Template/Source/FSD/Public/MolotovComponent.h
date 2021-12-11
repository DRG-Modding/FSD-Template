#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "MolotovComponent.generated.h"

class UDebrisPositioning;
class AActor;

UCLASS(BlueprintType)
class UMolotovComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Positioning;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> BurningFlamesClass;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
public:
    UFUNCTION(BlueprintCallable)
    void Trigger();
    
    UMolotovComponent();
};

