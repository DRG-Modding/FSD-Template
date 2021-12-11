#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EItemCategory.h"
#include "SavableDataAsset.h"
#include "ItemID.generated.h"

class AActor;
class UPlayerCharacterID;
class AItem;

UCLASS()
class FSD_API UItemID : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> Item;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* ItemOwner;
    
    UPROPERTY(EditAnywhere)
    EItemCategory ItemCategory;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AItem> GetItemClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EItemCategory GetItemCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItem* GetItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetActorClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActor() const;
    
    UItemID();
};

