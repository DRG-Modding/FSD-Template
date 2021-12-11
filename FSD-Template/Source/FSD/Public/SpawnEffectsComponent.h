#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpawnEffectsArray.h"
#include "SpawnEffectsComponent.generated.h"

class UMaterialInstance;

UCLASS()
class USpawnEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    FSpawnEffectsArray ActiveEffects;
    
    UPROPERTY(Transient)
    UMaterialInstance* BiomeMaterialOverride;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    USpawnEffectsComponent();
};

