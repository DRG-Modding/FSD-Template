#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DebrisSet.generated.h"

class UDebrisBase;

UCLASS()
class UDebrisSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
    
public:
    UDebrisSet();
};

