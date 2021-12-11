#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LoadoutItem.h"
#include "ItemIDInterface.h"
#include "GameFramework/Actor.h"
#include "SaveGameIDInterface.h"
#include "ArmorPiece.generated.h"

class AArmorPiece;
class UItemID;
class AItem;
class UUpgradableGearComponent;
class UPawnStat;
class ALoadoutItemProxy;

UCLASS(Abstract)
class AArmorPiece : public AActor, public ISaveGameIDInterface, public IItemIDInterface, public ILoadoutItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UUpgradableGearComponent* Upgradable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UPawnStat*, float> StatModifiers;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ALoadoutItemProxy> LoadoutProxy;
    
    UPROPERTY(EditAnywhere)
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> WeaponPreviewClass;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetWeaponViewClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AArmorPiece* GetArmorPieceDefaultObject(TSubclassOf<AArmorPiece> armorPieceClass);
    
    AArmorPiece();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AItem> GetLoadoutItemClass() const override PURE_VIRTUAL(GetLoadoutItemClass, return NULL;);
    
};

