#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "ABillityChargeProgressDelegate.h"
#include "AbillityChargeUsedSigDelegate.h"
#include "BoscoAbillityComponent.generated.h"

class AProjectileBase;
class USoundBase;
class UAnimSequenceBase;
class ABosco;
class UItemUpgrade;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBoscoAbillityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FABillityChargeProgress OnAbillityChargeProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbillityChargeUsedSig OnAbillityChargeUsed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectileBase> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* VoiceOnUse;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ABosco> AbillityOwner;
    
public:
    UBoscoAbillityComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxCharges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharges() const;
    
};

