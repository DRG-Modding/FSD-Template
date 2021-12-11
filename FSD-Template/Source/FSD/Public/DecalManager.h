#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "DecalManager.generated.h"

class UFSDPhysicalMaterial;

UCLASS(BlueprintType)
class UDecalManager : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SpawnDecal(const FVector& Location, const FVector& Normal, UFSDPhysicalMaterial* PhysMat);
    
    UDecalManager();
};

