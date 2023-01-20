#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "DebrisCapsule.h"
#include "EDebrisColliderType.h"
#include "TerrainPlacementBox.h"
#include "TerrainPlacementComponent.generated.h"

class AProceduralSetup;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UTerrainPlacementComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTerrainPlacementBox> TerrainCheckers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebrisColliderType CapsuleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebrisCapsule Capsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BlockerIDHack;
    
    UTerrainPlacementComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveBlockers();
    
    UFUNCTION(BlueprintCallable)
    void AddBlockers(AProceduralSetup* ProceduralSetup, const FTransform& Transform);
    
};

