#pragma once
#include "CoreMinimal.h"
#include "ResourceData.h"
#include "CarvedResourceData.generated.h"

class UCarvedResourceCreator;

UCLASS(Blueprintable)
class FSD_API UCarvedResourceData : public UResourceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCarvedResourceCreator> CarvedResourceCreator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitsPerCarver;
    
public:
    UCarvedResourceData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCarvedResourceCreator* LoadResourceCreator() const;
    
};

