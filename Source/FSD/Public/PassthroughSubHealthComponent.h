#pragma once
#include "CoreMinimal.h"
#include "SubHealthComponent.h"
#include "PassthroughSubHealthComponent.generated.h"

class USceneComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UPassthroughSubHealthComponent : public USubHealthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* ArmorComponent;
    
    UPassthroughSubHealthComponent();
};

