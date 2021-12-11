#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "DeepPathFinderSize.h"
#include "UObject/NoExportTypes.h"
#include "AreaSpawnerComponent.generated.h"

class AActor;
class APawn;

UCLASS(BlueprintType)
class UAreaSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ActorToSpawn;
    
    UPROPERTY(EditAnywhere)
    DeepPathFinderSize PathfinderSize;
    
    UPROPERTY(EditAnywhere)
    float ChanceToSpawn;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnInArea(const FVector& Origin, float Radius, float maxVerticalDistance, APawn* Instigator);
    
    UAreaSpawnerComponent();
};

