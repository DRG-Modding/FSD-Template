#pragma once
#include "CoreMinimal.h"
#include "UsableComponent.h"
#include "EInputKeys.h"
#include "InstantUsable.generated.h"

class APlayerCharacter;
class USoundCue;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInstantUsableOnUsedBy, APlayerCharacter*, User, EInputKeys, Key);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInstantUsableOnUsableChanged, bool, CanUse);

UCLASS()
class UInstantUsable : public UUsableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInstantUsableOnUsedBy OnUsedBy;
    
    UPROPERTY(BlueprintAssignable)
    FInstantUsableOnUsableChanged OnUsableChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowUsingUI;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AllowUseWhileCarrying;
    
    UPROPERTY(EditAnywhere)
    USoundCue* AudioCompletedUse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_Usable)
    bool Usable;
    
    UPROPERTY(EditAnywhere)
    bool TurnOffAfterUse;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCanUse(bool CanUse);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Usable();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UInstantUsable();
};

