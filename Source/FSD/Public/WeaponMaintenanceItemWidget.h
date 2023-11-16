#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EWeaponMaintenanceState.h"
#include "WeaponMaintenanceItemWidget.generated.h"

class UItemData;
class UItemID;
class UItemSkin;
class UObject;
class UPlayerCharacterID;

UCLASS(Blueprintable, EditInlineNew)
class UWeaponMaintenanceItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* WeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* characterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemSkin* Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemData* WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponMaintenanceState MaintenanceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaintenanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaintenanceXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaintenanceTargetXP;
    
public:
    UWeaponMaintenanceItemWidget();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void SetWeapon(UObject* WorldContext, UItemID* InWeaponID, UPlayerCharacterID* InCharacterID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void RefreshFromSavegame(UObject* WorldContext);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_RefreshedFromSavegame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_CanLevelUp();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool LevelUp(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLevel() const;
    
};

