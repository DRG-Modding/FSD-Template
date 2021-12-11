#pragma once
#include "CoreMinimal.h"
#include "ResourceData.h"
#include "CarvedResourceData.generated.h"

class UCarvedResourceCreator;

UCLASS()
class UCarvedResourceData : public UResourceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export)
    TSoftObjectPtr<UCarvedResourceCreator> CarvedResourceCreator;
    
    UPROPERTY(EditAnywhere)
    float UnitsPerCarver;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCarvedResourceCreator* LoadResourceCreator() const;
    
    UCarvedResourceData();
};

