#pragma once
#include "CoreMinimal.h"
#include "DestructableBodypartItem.h"
#include "SimpleArmorRadialDamagedDelegateDelegate.h"
#include "BaseArmorDamageComponent.h"
#include "ArmorDamageInfo.h"
#include "EArmorDamageType.h"
#include "SimpleArmorDamageComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USimpleArmorDamageComponent : public UBaseArmorDamageComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSimpleArmorRadialDamagedDelegate OnRadialArmorPartsDestroyedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDestructableBodypartItem> PhysBoneToArmor;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_ArmorDamageInfo, meta=(AllowPrivateAccess=true))
    FArmorDamageInfo ArmorDamageInfo;
    
public:
    USimpleArmorDamageComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetArmorIndexDestroyed(int32 Index, EArmorDamageType DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ArmorDamageInfo(FArmorDamageInfo OldArmorDamageInfo);
    
};

