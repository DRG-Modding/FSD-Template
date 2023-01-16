#pragma once
#include "CoreMinimal.h"
#include "EPickaxePartLocation.h"
#include "SavablePrimaryDataAsset.h"
#include "PickaxePart.generated.h"

class UItemAquisitionBase;
class UPickaxePartItem;

UCLASS(Blueprintable)
class FSD_API UPickaxePart : public USavablePrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemAquisitionBase* Aquisition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickaxePartItem* Item;
    
public:
    UPickaxePart();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUnlockedFromStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPickaxePartLocation GetPrefferedLocation() const;
    
};

