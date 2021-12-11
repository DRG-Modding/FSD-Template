#pragma once
#include "CoreMinimal.h"
#include "EPickaxePartLocation.h"
#include "SavablePrimaryDataAsset.h"
#include "PickaxePart.generated.h"

class UItemAquisitionSource;
class UPickaxePartItem;
class UDLCBase;

UCLASS(BlueprintType)
class UPickaxePart : public USavablePrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UPickaxePartItem* Item;
    
    UPROPERTY(EditAnywhere)
    UItemAquisitionSource* AquisitionSource;
    
    UPROPERTY(EditAnywhere)
    bool UnlockedFromStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDLCBase* RequiredDLC;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPickaxePartLocation GetPrefferedLocation() const;
    
    UPickaxePart();
};

