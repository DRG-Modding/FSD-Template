#pragma once
#include "CoreMinimal.h"
#include "BaseArmorDamageComponent.h"
#include "ArmorHealthItem.h"
#include "ArmorHealthDamageComponent.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArmorHealthDamageComponentOnArmorPartDestroyedEvent, FName, Name);
UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FArmorHealthDamageComponentOnArmorPartDamagedEvent, FName, BoneName, float, Damage);

UCLASS()
class UArmorHealthDamageComponent : public UBaseArmorDamageComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FArmorHealthDamageComponentOnArmorPartDestroyedEvent OnArmorPartDestroyedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FArmorHealthDamageComponentOnArmorPartDamagedEvent OnArmorPartDamagedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FArmorHealthItem> PhysBoneToArmor;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ArmorDamageIndex)
    uint32 ArmorDamageIndex;
    
    UPROPERTY(EditAnywhere)
    bool AffectedByAmorBreak;
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetHealthOnBodypartItem(FName BoneName, float newHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetHealthOnAllItems(float newHealth);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegrowAllArmor(float baseHealth);
    
protected:
    UFUNCTION()
    void OnRep_ArmorDamageIndex(uint32 OldValue);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UArmorHealthDamageComponent();
};

