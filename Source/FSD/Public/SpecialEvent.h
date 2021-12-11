#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpecialEvent.generated.h"

class USpecialEventSpawner;

UCLASS()
class USpecialEvent : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Weight;
    
protected:
    UPROPERTY(EditAnywhere, Instanced)
    USpecialEventSpawner* EventSpawner;
    
public:
    USpecialEvent();
};

