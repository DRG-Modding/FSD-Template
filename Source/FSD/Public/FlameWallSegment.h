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
    UPROPERTY(BlueprintReadWrite, Export, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComponent;
    
public:
    AFlameWallSegment();
};

