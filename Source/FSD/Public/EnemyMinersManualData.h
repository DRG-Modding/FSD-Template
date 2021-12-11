#pragma once
#include "CoreMinimal.h"
#include "EArmorType.h"
#include "Engine/DataAsset.h"
#include "EEnemyFamily.h"
#include "EEnemyType.h"
#include "EnemyAttackDescription.h"
#include "EnemyMinersManualStats.h"
#include "EDamageType.h"
#include "EnemyMinersManualData.generated.h"

class UTexture2D;
class UEnemyID;
class UAnimSequenceBase;
class AEnemyShowroomItem;

UCLASS(BlueprintType)
class UEnemyMinersManualData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UEnemyID* EnemyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText RichDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FText> GameplayTips;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EEnemyFamily Family;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EEnemyType EnemyType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEnemyAttackDescription> AttackType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEnemyAttackDescription> SpecialAttacks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimSequenceBase*> AttackAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EArmorType ArmorType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Armor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Weakpoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEnemyMinersManualStats EnemyStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EDamageType> Resistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EDamageType> Weaknesses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> LoreInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AlwaysUnlocked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 InfoUnlockSpeed;
    
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> EnemyIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AEnemyShowroomItem> PreviewActor;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetEnemyIcon() const;
    
    UEnemyMinersManualData();
};

