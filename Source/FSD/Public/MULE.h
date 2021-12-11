#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
#include "MULE.generated.h"

class USimpleObjectInfoComponent;
class UHealthComponent;

UCLASS(Abstract)
class AMULE : public ADeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleObjectInfoComponent* ObjectInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_IsDown)
    bool IsDown;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsDown(bool NewIsDown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetControlledByDropShip(bool Control);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_IsDown();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AMULE();
};

