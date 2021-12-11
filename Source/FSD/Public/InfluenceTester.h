#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InfluenceTester.generated.h"

class USphereComponent;
class UCaveInfluencer;

UCLASS()
class AInfluenceTester : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCaveInfluencer* Influencer;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* Sphere;
    
    AInfluenceTester();
};

