#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpawnEffectsArray.h"
#include "SpawnEffectsComponent.generated.h"

class UMaterialInstance;

UCLASS(meta=(BlueprintSpawnableComponent))
class USpawnEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    FSpawnEffectsArray ActiveEffects;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* BiomeMaterialOverride;
    
public:
    USpawnEffectsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

