#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlameWallSegment.generated.h"

class USphereComponent;

UCLASS(Abstract)
class AFlameWallSegment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    USphereComponent* CollisionComponent;
    
public:
    AFlameWallSegment();
};

