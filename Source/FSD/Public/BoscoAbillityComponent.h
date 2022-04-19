#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ABillityChargeProgressDelegate.h"
#include "Components/ActorComponent.h"
#include "AbillityChargeUsedSigDelegate.h"
#include "BoscoAbillityComponent.generated.h"

class UItemUpgrade;
class AProjectileBase;
class UAnimSequenceBase;
class AActor;
class USoundBase;
class ABosco;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UBoscoAbillityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FABillityChargeProgress OnAbillityChargeProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAbillityChargeUsedSig OnAbillityChargeUsed;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectileBase> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* VoiceOnUse;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABosco> AbillityOwner;
    
public:
    UBoscoAbillityComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxCharges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharges() const;
    
};

