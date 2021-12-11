#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DebrisActorComponent.generated.h"

UCLASS()
class UDebrisActorComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Enabled;
    
    UDebrisActorComponent();
};

