#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "EMissionStatType.h"
#include "Templates/SubclassOf.h"
#include "MissionStat.generated.h"

class APlayerCharacter;
class UFSDAchievement;
class UMissionStat;
class UMissionStatCategory;
class UObject;
class UPlayerCharacterID;
class UTexture2D;

UCLASS(Blueprintable)
class UMissionStat : public UDataAsset {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStatCountChanged, UObject*, WorldContext, UMissionStat*, MissionStat, float, Value);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatCountChanged OnCountChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStatCategory* Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDAchievement* StatAchievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionStatType MissionStatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoNotShowInMissionStatView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowAllValuesCombined;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowHighestValue;
    
public:
    UMissionStat();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    float SetStatValue(UObject* WorldContext, APlayerCharacter* Character, float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText MissionStatToText(EMissionStatType StatType, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void Increment(UObject* WorldContext, UMissionStat* Stat, TSubclassOf<APlayerCharacter> CharacterClass, float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    float GetStatMinCount(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    float GetStatMaxCount(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    FText GetStatCountTotalAsText(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    float GetStatCountTotal(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    float GetStatCountPct(UObject* WorldContext, TSubclassOf<APlayerCharacter> CharacterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    FText GetStatCountAsText(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    float GetStatCount(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSourceTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    FText GetLowestStatCountAsText(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    FText GetHighestStatCountAsText(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCategoryTitle() const;
    
};

