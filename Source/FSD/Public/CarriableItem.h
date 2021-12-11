#pragma once
#include "CoreMinimal.h"
#include "FSDPhysicsActor.h"
#include "UObject/NoExportTypes.h"
#include "CarriableItem.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCarriableItemOnAttachedChangeDelegate, bool, Attached, FVector, PrevScale);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCarriableItemOnCarriableDeposited, APlayerCharacter*, fromCharacter);

UCLASS(Abstract)
class ACarriableItem : public AFSDPhysicsActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCarriableItemOnAttachedChangeDelegate OnAttachedChangeDelegate;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FCarriableItemOnCarriableDeposited OnCarriableDeposited;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StrictDeposit;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Throw(FVector force);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnDeposited(APlayerCharacter* fromPlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttachChanged(bool Attached);
    
    ACarriableItem();
};

