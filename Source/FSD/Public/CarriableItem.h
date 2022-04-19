#pragma once
#include "CoreMinimal.h"
#include "FSDPhysicsActor.h"
#include "Throwable.h"
#include "AttachChangeSigDelegate.h"
#include "OnCarriableDepositedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "CarriableItem.generated.h"

class APlayerCharacter;

UCLASS(Abstract)
class ACarriableItem : public AFSDPhysicsActor, public IThrowable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAttachChangeSig OnAttachedChangeDelegate;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnCarriableDeposited OnCarriableDeposited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StrictDeposit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDopositable;
    
public:
    ACarriableItem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Throw(FVector force);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnDeposited(APlayerCharacter* fromPlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttachChanged(bool Attached);
    
    
    // Fix for true pure virtual functions not being implemented
};

