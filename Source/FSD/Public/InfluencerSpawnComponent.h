#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "InfluencerSpawnComponent.generated.h"

class UCaveInfluencer;

UCLASS()
class UInfluencerSpawnComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UCaveInfluencer* Influencer;
    
    UPROPERTY(EditAnywhere)
    float range;
    
public:
    UInfluencerSpawnComponent();
};

