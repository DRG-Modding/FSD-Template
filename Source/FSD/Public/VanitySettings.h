#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "EVanitySlot.h"
#include "ResourceSpawner.h"
#include "VanityMasterySettings.h"
#include "VanitySlotCharacter.h"
#include "VanitySettings.generated.h"

class UDLCBase;
class UObject;
class UPlayerCharacterID;
class UTexture2D;
class UVanityItem;

UCLASS(Blueprintable)
class FSD_API UVanitySettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanityItem* MedbayArmorItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVanityItem*> MedbayArmorMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLCBase* AlwaysLockedDLC;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVanityMasterySettings MasterySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourceSpawner FashioniteSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> VanityCategoryIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FGuid> ValidIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UVanityItem*> ItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EVanitySlot, FVanitySlotCharacter> GlobalItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EVanitySlot, FVanitySlotCharacter> StoreItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EVanitySlot, FVanitySlotCharacter> TreassureItems;
    
public:
    UVanitySettings();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasNewVanityNotification(UObject* WorldContextObject, EVanitySlot Slot, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetVanityCategoryIcon(EVanitySlot Slot) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetUnlockedStoreVanityCount(UObject* WorldContextObject, EVanitySlot Slot, UPlayerCharacterID* characterID, int32& owned, int32& Total);
    
};

