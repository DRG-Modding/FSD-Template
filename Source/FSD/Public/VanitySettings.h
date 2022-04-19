#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "ResourceSpawner.h"
#include "VanityMasterySettings.h"
#include "EVanitySlot.h"
#include "VanitySlotCharacter.h"
#include "VanitySettings.generated.h"

class UVanityItem;
class UObject;
class UTexture2D;
class UPlayerCharacterID;

UCLASS(BlueprintType)
class FSD_API UVanitySettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanityItem* MedbayArmorItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVanityItem*> MedbayArmorMaterials;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVanityMasterySettings MasterySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourceSpawner FashioniteSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> VanityCategoryIcons;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> ValidIDs;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UVanityItem*> ItemMap;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVanitySlot, FVanitySlotCharacter> GlobalItems;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVanitySlot, FVanitySlotCharacter> StoreItems;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVanitySlot, FVanitySlotCharacter> TreassureItems;
    
public:
    UVanitySettings();
    UFUNCTION(BlueprintCallable)
    static bool HasNewVanityNotification(UObject* WorldContextObject, EVanitySlot Slot, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetVanityCategoryIcon(EVanitySlot Slot) const;
    
    UFUNCTION(BlueprintCallable)
    static void GetUnlockedStoreVanityCount(UObject* WorldContextObject, EVanitySlot Slot, UPlayerCharacterID* characterID, int32& owned, int32& Total);
    
};

