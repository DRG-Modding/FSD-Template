#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
#include "MULE.generated.h"

class UHealthComponent;
class USimpleObjectInfoComponent;

UCLASS(Abstract, Blueprintable)
class FSD_API AMULE : public ADeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USimpleObjectInfoComponent* ObjectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDown, meta=(AllowPrivateAccess=true))
    bool IsDown;
    
public:
    AMULE();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetIsDown(bool NewIsDown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetControlledByDropShip(bool Control);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_IsDown();
    
};

