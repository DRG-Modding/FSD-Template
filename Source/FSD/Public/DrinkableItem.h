#pragma once
#include "CoreMinimal.h"
#include "AnimatedItem.h"
#include "ECharacterCameraMode.h"
#include "DrinkableItem.generated.h"

class UDrinkableDataAsset;

UCLASS(Abstract, Blueprintable)
class ADrinkableItem : public AAnimatedItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DrinkableData, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* DrinkableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 BarSlotIndex;
    
public:
    ADrinkableItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ThrowDrink();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveConsumed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DrinkableData();
    
    UFUNCTION(BlueprintCallable)
    void OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    
    UFUNCTION(BlueprintCallable)
    void Consume();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientConsumed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckCanSalute() const;
    
};

