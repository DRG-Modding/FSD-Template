#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "CombinedUpgrade.generated.h"

UCLASS(EditInlineNew)
class FSD_API UCombinedUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UItemUpgrade>> CombinedUpgrades;
    
    UPROPERTY(Transient)
    TArray<UItemUpgrade*> LoadedUpgrades;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItemUpgrade*> GetUpgrades() const;
    
    UCombinedUpgrade();
};

