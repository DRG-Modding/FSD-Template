#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FragileDebrisCleaner.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFragileDebrisCleaner : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CleanRadius;
    
    UFragileDebrisCleaner();
};

