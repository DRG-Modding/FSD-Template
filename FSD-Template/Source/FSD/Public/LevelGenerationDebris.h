#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelGenerationDebris.generated.h"

class UDebrisBase;
class UObject;

UCLASS()
class ULevelGenerationDebris : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDebrisBase* Debris;
    
protected:
    UPROPERTY(EditAnywhere)
    UObject* Influencer;
    
    UPROPERTY(EditAnywhere)
    float range;
    
    UPROPERTY(EditAnywhere)
    bool SelfActivate;
    
public:
    ULevelGenerationDebris();
};

