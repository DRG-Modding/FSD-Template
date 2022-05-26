#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "InfluencerSpawnComponent.generated.h"

class UCaveInfluencer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInfluencerSpawnComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCaveInfluencer* Influencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float range;
    
public:
    UInfluencerSpawnComponent();
};

