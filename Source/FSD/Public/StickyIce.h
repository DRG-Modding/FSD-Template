#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DamageData.h"
#include "StickyFlame.h"
#include "StickyIce.generated.h"

class AActor;
class USceneComponent;
class USimpleHealthComponent;

UCLASS(Blueprintable)
class AStickyIce : public AStickyFlame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* VisualRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleHealthComponent* Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxIntegrity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeatDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntegrityLossOnSTETrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Integrity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IntegrityModifier, meta=(AllowPrivateAccess=true))
    float IntegrityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle Handle_Melting;
    
public:
    AStickyIce(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StartMelting();
    
    UFUNCTION(BlueprintCallable)
    void OnSTETriggered(AActor* target_actor, bool entered);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IntegrityModifier();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIceExpire();
    
    UFUNCTION(BlueprintCallable)
    void OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    
    UFUNCTION(BlueprintCallable)
    void AddToCurrentIntegrity(float Value, bool predictable);
    
};

