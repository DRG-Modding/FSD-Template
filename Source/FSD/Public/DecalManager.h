#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "DecalManager.generated.h"

class UFSDPhysicalMaterial;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UDecalManager : public UActorComponent {
    GENERATED_BODY()
public:
    UDecalManager();
    UFUNCTION(BlueprintCallable)
    void SpawnDecal(const FVector& Location, const FVector& Normal, UFSDPhysicalMaterial* PhysMat);
    
};

