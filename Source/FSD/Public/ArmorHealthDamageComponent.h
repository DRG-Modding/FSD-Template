#pragma once
#include "CoreMinimal.h"
#include "ArmorDamageInfo.h"
#include "BaseArmorDamageComponent.h"
#include "AmorPartDestroyedDelegateDelegate.h"
#include "ArmorPartDamagedDelegateDelegate.h"
#include "ArmorHealthItem.h"
#include "ArmorHealthDamageComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UArmorHealthDamageComponent : public UBaseArmorDamageComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmorPartDestroyedDelegate OnArmorPartDestroyedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorPartDamagedDelegate OnArmorPartDamagedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmorPartDestroyedDelegate OnSocketPartDestroyedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorPartDamagedDelegate OnSocketPartDamagedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FArmorHealthItem> PhysBoneToArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ArmorDamageInfo, meta=(AllowPrivateAccess=true))
    FArmorDamageInfo ArmorDamageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadialSocketDamageMultiplier;
    
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
    void PopAllWeakPoints();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ArmorDamageInfo(FArmorDamageInfo OldValue);
    
};

