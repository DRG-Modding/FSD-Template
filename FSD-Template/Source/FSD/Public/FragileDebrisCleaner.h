#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FragileDebrisCleaner.generated.h"

UCLASS()
class UFragileDebrisCleaner : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CleanRadius;
    
    UFragileDebrisCleaner();
};

