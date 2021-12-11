#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "EMissionStatType.h"
#include "MissionStat.generated.h"

class UObject;
class UMissionStat;
class UMissionStatCategory;
class UFSDAchievement;
class APlayerCharacter;
class UPlayerCharacterID;
class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionStatOnCountChanged, UMissionStat*, MissionStat, float, Value);

UCLASS(BlueprintType)
class UMissionStat : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMissionStatOnCountChanged OnCountChanged;
    
protected:
    UPROPERTY(VisibleAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStatCategory* Category;
    
    UPROPERTY(EditAnywhere)
    UFSDAchievement* StatAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMissionStatType MissionStatType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DoNotShowInMissionStatView;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowAllValuesCombined;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowHighestValue;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText MissionStatToText(EMissionStatType StatType, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void Increment(UObject* WorldContext, UMissionStat* Stat, TSubclassOf<APlayerCharacter> CharacterClass, float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatMinCount(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatMaxCount(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStatCountTotalAsText(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatCountTotal(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatCountPct(UObject* WorldContext, TSubclassOf<APlayerCharacter> CharacterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStatCountAsText(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatCount(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSourceTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLowestStatCountAsText(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHighestStatCountAsText(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCategoryTitle() const;
    
    UMissionStat();
};

