#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RoomCarverComponent.generated.h"

class URoomGenerator;

UCLASS()
class URoomCarverComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    URoomGenerator* RoomGenerator;
    
public:
    URoomCarverComponent();
};

