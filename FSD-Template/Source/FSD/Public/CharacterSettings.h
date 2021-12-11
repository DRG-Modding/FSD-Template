#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "CharacterSettings.generated.h"

class APlayerCharacter;
class ACarriableItem;
class UPlayerCharacterID;
class USkeletalMesh;
class UUseAnimationSetting;
class UCharacterVanityItems;
class UDialogDataAsset;
class UDebrisPositioning;
class UTerrainPlacementComponent;
class UAsyncManager;

UCLASS(BlueprintType)
class UCharacterSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<APlayerCharacter>> RankedHeroClasses;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<APlayerCharacter>> LoadedClasses;
    
    UPROPERTY(EditAnywhere)
    TArray<FText> PlayerRankNames;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> CharacterXPLevels;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FGuid, UPlayerCharacterID*> PlayerCharacterIDMap;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<UPlayerCharacterID*> PlayerCharacterIDs;
    
    UPROPERTY(EditAnywhere)
    UPlayerCharacterID* BoscoID;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* NoHead;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* DefaultHead;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* ThickNeck;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* ThinNeck;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ACarriableItem> CarriableBagClass;
    
    UPROPERTY(EditAnywhere)
    UUseAnimationSetting* ThrowItemAnimSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UPlayerCharacterID*, UCharacterVanityItems*> CharacterVanityItems;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* AutoReloadShout;
    
    UPROPERTY(EditAnywhere)
    UDebrisPositioning* TeleportPositioning;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTerrainPlacementComponent> TeleportPlacement;
    
    UFUNCTION(BlueprintCallable)
    void PreloadAllInventories(UAsyncManager* AsyncManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterID* GetPlayerCharacterID(const FGuid& ID) const;
    
    UCharacterSettings();
};

