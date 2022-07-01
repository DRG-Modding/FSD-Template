#pragma once
#include "CoreMinimal.h"
#include "SavablePrimaryDataAsset.h"
#include "EPickaxePartLocation.h"
#include "PickaxePart.generated.h"

class UItemAquisitionSource;
class UItemAquisitionBase;
class UPickaxePartItem;
class UDLCBase;

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
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemAquisitionSource* AquisitionSource;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnlockedFromStart;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLCBase* RequiredDLC;
    
public:
    UPickaxePart();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUnlockedFromStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPickaxePartLocation GetPrefferedLocation() const;
    
};

