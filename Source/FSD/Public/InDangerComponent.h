#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IsInDangerSigDelegate.h"
#include "InDangerComponent.generated.h"

class UHealthComponentBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInDangerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsInDangerSig OnInDanger;
    
protected:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UHealthComponentBase> ParentHealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RunsOnClients;
    
public:
    UInDangerComponent();
    UFUNCTION(BlueprintCallable)
    void SetIsActive(bool aFlag);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsActive() const;
    
};

