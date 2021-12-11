#pragma once
#include "CoreMinimal.h"
#include "DebrisActorComponent.h"
#include "DebrisItemActorItem.h"
#include "EDebrisItemPass.h"
#include "IRandRange.h"
#include "DebrisItemComponent.generated.h"

class UDebrisPositioning;

UCLASS()
class UDebrisItemComponent : public UDebrisActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Debris;
    
    UPROPERTY(EditAnywhere)
    TArray<FDebrisItemActorItem> Actors;
    
    UPROPERTY(EditAnywhere)
    EDebrisItemPass ItemPass;
    
    UPROPERTY(EditAnywhere)
    float InfluenceRange;
    
    UPROPERTY(EditAnywhere)
    float MinDistanceToImportantLocations;
    
    UPROPERTY(EditAnywhere)
    bool UseAmount;
    
    UPROPERTY(EditAnywhere)
    FIRandRange Amount;
    
    UPROPERTY(EditAnywhere)
    int32 AmountSearchMultiplier;
    
    UDebrisItemComponent();
};

