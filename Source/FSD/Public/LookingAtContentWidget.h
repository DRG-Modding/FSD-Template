#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LookingAtContentWidget.generated.h"

class UPawnAfflictionComponent;
class AActor;
class UHackingUsableComponent;
class USimpleObjectInfoComponent;
class UHealth;
class IHealth;
class UPetComponent;

UCLASS(Abstract, EditInlineNew)
class ULookingAtContentWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPawnAfflictionComponent> CurrentTargetAfflictions;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USimpleObjectInfoComponent> CurrentTargetInfo;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IHealth> CurrentTargetHealth;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHackingUsableComponent> CurrentHackingComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPetComponent> CurrentPetComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bWeakPointHit;
    
public:
    ULookingAtContentWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentTarget(float DeltaSeconds, AActor* InTargetActor, const TScriptInterface<IHealth>& InTargetHealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterWeakPointHit();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdateTarget(AActor* InCurrentTarget, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNewTarget(AActor* InCurrentTarget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTargetOwnerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTargetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetHealthPct() const;
    
};

