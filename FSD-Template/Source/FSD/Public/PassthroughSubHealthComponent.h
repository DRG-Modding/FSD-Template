#pragma once
#include "CoreMinimal.h"
#include "SubHealthComponent.h"
#include "PassthroughSubHealthComponent.generated.h"

class USceneComponent;

UCLASS()
class UPassthroughSubHealthComponent : public USubHealthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneComponent* ArmorComponent;
    
    UPassthroughSubHealthComponent();
};

