#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InfluenceTester.generated.h"

class UCaveInfluencer;
class USphereComponent;

UCLASS(Blueprintable)
class AInfluenceTester : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCaveInfluencer* Influencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* Sphere;
    
    AInfluenceTester();
};

