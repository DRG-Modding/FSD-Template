#pragma once
#include "CoreMinimal.h"
#include "BaseArmorDamageComponent.h"
#include "ArmorPrimitiveDestroyedDelegate.h"
#include "ArmorPrimitiveDamagedDelegateDelegate.h"
#include "CompositeArmorItem.h"
#include "ArmorDamageInfo.h"
#include "CompositeArmorComponent.generated.h"

class UFXSystemAsset;
class UPrimitiveComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCompositeArmorComponent : public UBaseArmorDamageComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FArmorPrimitiveDestroyed OnArmorPartDestroyedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FArmorPrimitiveDamagedDelegate OnArmorPartDamagedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* BreakParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AffectedByAmorBreak;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCompositeArmorItem> ArmorItems;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_ArmorDamageInfo, meta=(AllowPrivateAccess=true))
    FArmorDamageInfo ArmorDamageInfo;
    
public:
    UCompositeArmorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ArmorDamageInfo(FArmorDamageInfo OldValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddArmorPart(UPrimitiveComponent* Primitive, float Health, bool overrideAffectedByArmomrBreak, bool NewAffectedByArmorBreak);
    
};

