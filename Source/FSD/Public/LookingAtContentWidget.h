#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LookingAtContentWidget.generated.h"

class AActor;
class IHealth;
class UHealth;
class UHackingUsableComponent;
class UPawnAfflictionComponent;
class UPetComponent;
class USimpleObjectInfoComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ULookingAtContentWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPawnAfflictionComponent> CurrentTargetAfflictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USimpleObjectInfoComponent> CurrentTargetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IHealth> CurrentTargetHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHackingUsableComponent> CurrentHackingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPetComponent> CurrentPetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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

