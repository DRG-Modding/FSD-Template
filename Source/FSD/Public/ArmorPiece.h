#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemIDInterface.h"
#include "LoadoutItem.h"
#include "SaveGameIDInterface.h"
#include "Templates/SubclassOf.h"
#include "ArmorPiece.generated.h"

class AArmorPiece;
class AItem;
class ALoadoutItemProxy;
class UItemID;
class UPawnStat;
class UUpgradableGearComponent;

UCLASS(Abstract, Blueprintable)
class AArmorPiece : public AActor, public ISaveGameIDInterface, public IItemIDInterface, public ILoadoutItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUpgradableGearComponent* Upgradable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPawnStat*, float> StatModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALoadoutItemProxy> LoadoutProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> WeaponPreviewClass;
    
public:
    AArmorPiece();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetWeaponViewClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AArmorPiece* GetArmorPieceDefaultObject(TSubclassOf<AArmorPiece> armorPieceClass);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AItem> GetLoadoutItemClass() const override PURE_VIRTUAL(GetLoadoutItemClass, return NULL;);
    
};

