#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EInfectionState.h"
#include "FloatDelegateDelegate.h"
#include "IntDelegateDelegate.h"
#include "OnInfectionStateChangedDelegateDelegate.h"
#include "PlayerInfectionComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerInfectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntDelegate OnInfectionLevelChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatDelegate OnBreakoutPercentageChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInfectionStateChangedDelegate OnInfectionStateChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EInfectionState InfectionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReductionCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfectionImmunityAfterFullInfection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InfectionLevel, meta=(AllowPrivateAccess=true))
    float InfectionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BreakoutPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfectionDecreaseOverTimer;
    
public:
    UPlayerInfectionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ClearInfection();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InfectionLevel(float oldLevel);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void IncreaseInfection(float Amount, AActor* Source);
    
};

