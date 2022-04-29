#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RoomCarverComponent.generated.h"

class URoomGenerator;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URoomCarverComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URoomGenerator* RoomGenerator;
    
public:
    URoomCarverComponent();
};

