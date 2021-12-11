#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LookingAtWidget.generated.h"

class APlayerCharacter;
class UCharacterSightComponent;
class UPawnAfflictionComponent;
class AActor;
class UHealth;
class IHealth;
class UHealthComponentBase;

UCLASS(EditInlineNew)
class ULookingAtWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetSelectDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetLostDuration;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<APlayerCharacter> Character;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UCharacterSightComponent> CharacterSight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AActor> CurrentTarget;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UPawnAfflictionComponent> CurrentTargetAfflictions;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TScriptInterface<IHealth> CurrentTargetHealth;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool CanCurrentTargetTakeDamage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float TargetLostTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTargetSet;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTarget(AActor* NewActor, const TScriptInterface<IHealth>& HealthComponent, float OverrideTargetLostTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetCurrentTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdateTarget(AActor* InCurrentTarget, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTargetLost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNewTarget(AActor* InCurrentTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsValidTarget(AActor* TargetActor, const TScriptInterface<IHealth>& TargetHealth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossFight(const TScriptInterface<IHealth>& Health) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHealthComponentBase* GetLookingAtHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLookingAtActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterTemperatureEffect(float& TemperatureEffect) const;
    
public:
    ULookingAtWidget();
};

