#pragma once
#include "CoreMinimal.h"
#include "BaseArmorDamageComponent.h"
#include "AmorPartDestroyedDelegateDelegate.h"
#include "ArmorPartDamagedDelegateDelegate.h"
#include "ArmorHealthItem.h"
#include "ArmorDamageInfo.h"
#include "ArmorHealthDamageComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UArmorHealthDamageComponent : public UBaseArmorDamageComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAmorPartDestroyedDelegate OnArmorPartDestroyedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FArmorPartDamagedDelegate OnArmorPartDamagedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FArmorHealthItem> PhysBoneToArmor;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_ArmorDamageInfo, meta=(AllowPrivateAccess=true))
    FArmorDamageInfo ArmorDamageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AffectedByAmorBreak;
    
public:
    UArmorHealthDamageComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool SetHealthOnBodypartItem(FName BoneName, float newHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetHealthOnAllItems(float newHealth);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegrowAllArmor(float baseHealth);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ArmorDamageInfo(FArmorDamageInfo OldValue);
    
};

