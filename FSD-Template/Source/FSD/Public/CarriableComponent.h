#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Throwable.h"
#include "EUseRestriction.h"
#include "UObject/NoExportTypes.h"
#include "CarriableComponent.generated.h"

class APlayerCharacter;
class UDialogDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCarriableComponentOnPickedUp);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCarriableComponentOnDropped);

UCLASS(BlueprintType)
class UCarriableComponent : public UActorComponent, public IThrowable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCarriableComponentOnPickedUp OnPickedUp;
    
    UPROPERTY(BlueprintAssignable)
    FCarriableComponentOnDropped OnDropped;
    
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UDialogDataAsset> ShoutWhileCarrying;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CarriedBy)
    APlayerCharacter* CarriedBy;
    
    UPROPERTY(EditAnywhere)
    EUseRestriction UseRestriction;
    
    UPROPERTY(EditAnywhere)
    FVector Offset;
    
public:
    UFUNCTION(BlueprintCallable)
    bool PickupItem(APlayerCharacter* byCharacter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CarriedBy();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DropItem();
    
    UFUNCTION(BlueprintCallable)
    void AttachChanged(bool Attached, const FVector PrevScale);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCarriableComponent();
    
    // Fix for true pure virtual functions not being implemented
};

