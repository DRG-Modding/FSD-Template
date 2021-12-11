#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RaycastDebugProbe.generated.h"

class UTerrainType;

UCLASS()
class ARaycastDebugProbe : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTerrainType* TerrainType;
    
    ARaycastDebugProbe();
};

