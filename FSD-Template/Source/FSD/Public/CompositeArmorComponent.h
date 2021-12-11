#pragma once
#include "CoreMinimal.h"
#include "CompositeArmorItem.h"
#include "BaseArmorDamageComponent.h"
#include "CompositeArmorComponent.generated.h"

class UPrimitiveComponent;
class UFXSystemAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompositeArmorComponentOnArmorPartDestroyedEvent, UPrimitiveComponent*, collider);
UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCompositeArmorComponentOnArmorPartDamagedEvent, UPrimitiveComponent*, collider, float, Damage);

UCLASS()
class UCompositeArmorComponent : public UBaseArmorDamageComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FCompositeArmorComponentOnArmorPartDestroyedEvent OnArmorPartDestroyedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FCompositeArmorComponentOnArmorPartDamagedEvent OnArmorPartDamagedEvent;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* BreakParticle;
    
    UPROPERTY(EditAnywhere)
    bool AffectedByAmorBreak;
    
    UPROPERTY(Transient)
    TArray<FCompositeArmorItem> ArmorItems;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ArmorDamageIndex)
    uint32 ArmorDamageIndex;
    
    UFUNCTION()
    void OnRep_ArmorDamageIndex(uint32 OldValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddArmorPart(UPrimitiveComponent* Primitive, float Health);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCompositeArmorComponent();
};

