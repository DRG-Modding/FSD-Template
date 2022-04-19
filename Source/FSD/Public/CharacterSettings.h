#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "CharacterSettings.generated.h"

class ACarriableItem;
class UUseAnimationSetting;
class APlayerCharacter;
class USkeletalMesh;
class UPlayerCharacterID;
class UCharacterVanityItems;
class UDialogDataAsset;
class UDebrisPositioning;
class UTerrainPlacementComponent;
class UPlayerCharacterData;
class UAsyncManager;

UCLASS(BlueprintType)
class UCharacterSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APlayerCharacter>> RankedHeroClasses;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<APlayerCharacter>> LoadedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> PlayerRankNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CharacterXPLevels;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPlayerCharacterID*> PlayerCharacterIDMap;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayerCharacterID*> PlayerCharacterIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* BoscoID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* NoHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* DefaultHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ThickNeck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ThinNeck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACarriableItem> CarriableBagClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUseAnimationSetting* ThrowItemAnimSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPlayerCharacterID*, UCharacterVanityItems*> CharacterVanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* AutoReloadShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* TeleportPositioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTerrainPlacementComponent> TeleportPlacement;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPlayerCharacterID*, UPlayerCharacterData*> CharacterData;
    
public:
    UCharacterSettings();
    UFUNCTION(BlueprintCallable)
    void PreloadAllInventories(UAsyncManager* AsyncManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterID* GetPlayerCharacterID(const FGuid& ID) const;
    
};

