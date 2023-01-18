#pragma once
#include "CoreMinimal.h"
#include "EItemCategory.h"
#include "SavableDataAsset.h"
#include "Templates/SubclassOf.h"
#include "ItemID.generated.h"

class AActor;
class AItem;
class UItemData;
class UItemSkin;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class FSD_API UItemID : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* ItemOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemCategory ItemCategory;
    
public:
    UItemID();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemClassChildOf(TSubclassOf<AActor> InParentClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemData* GetItemData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AItem> GetItemClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EItemCategory GetItemCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItem* GetItem() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UItemSkin*> GetAllSkins();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetActorClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActor() const;
    
};

