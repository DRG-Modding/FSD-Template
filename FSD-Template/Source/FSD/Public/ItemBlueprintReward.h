#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UnlockReward.h"
#include "ItemBlueprintReward.generated.h"

class AActor;

UCLASS(BlueprintType, EditInlineNew)
class UItemBlueprintReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> ItemToUnlock;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActorDefaultObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetActorClass() const;
    
public:
    UItemBlueprintReward();
};

