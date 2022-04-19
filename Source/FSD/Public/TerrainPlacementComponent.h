#pragma once
#include "CoreMinimal.h"
#include "DebrisCapsule.h"
#include "Components/SceneComponent.h"
#include "TerrainPlacementBox.h"
#include "EDebrisColliderType.h"
#include "UObject/NoExportTypes.h"
#include "TerrainPlacementComponent.generated.h"

class AProceduralSetup;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class FSD_API UTerrainPlacementComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTerrainPlacementBox> TerrainCheckers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebrisColliderType CapsuleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebrisCapsule Capsule;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 BlockerIDHack;
    
    UTerrainPlacementComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveBlockers();
    
    UFUNCTION(BlueprintCallable)
    void AddBlockers(AProceduralSetup* ProceduralSetup, const FTransform& Transform);
    
};

