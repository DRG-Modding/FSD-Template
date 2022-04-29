#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FragileDebrisCleaner.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFragileDebrisCleaner : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CleanRadius;
    
    UFragileDebrisCleaner();
};

