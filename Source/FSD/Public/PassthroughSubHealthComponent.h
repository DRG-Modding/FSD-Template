#pragma once
#include "CoreMinimal.h"
#include "SubHealthComponent.h"
#include "PassthroughSubHealthComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPassthroughSubHealthComponent : public USubHealthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* ArmorComponent;
    
    UPassthroughSubHealthComponent();
};

