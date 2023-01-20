#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "CarriableEventDelegate.h"
#include "Throwable.h"
#include "CarriableComponent.generated.h"

class APlayerCharacter;
class UDialogDataAsset;
class UItemCharacterAnimationSet;
class UUseAnimationSetting;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCarriableComponent : public UActorComponent, public IThrowable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarriableEvent OnPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarriableEvent OnDropped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDialogDataAsset> ShoutWhileCarrying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* OverrideCarryAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUseAnimationSetting* OverrideThrowAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* CarriedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
public:
    UCarriableComponent();
    UFUNCTION(BlueprintCallable)
    bool PickupItem(APlayerCharacter* byCharacter);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DropItem();
    
    UFUNCTION(BlueprintCallable)
    void AttachChanged(bool Attached, const FVector PrevScale);
    
    
    // Fix for true pure virtual functions not being implemented
};

