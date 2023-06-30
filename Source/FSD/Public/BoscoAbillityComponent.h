#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ABillityChargeProgressDelegate.h"
#include "AbilityDataUpdatedDelegate.h"
#include "AbillityChargeUsedSigDelegate.h"
#include "BoscoAbilityTarget.h"
#include "Templates/SubclassOf.h"
#include "Upgradable.h"
#include "BoscoAbillityComponent.generated.h"

class ABosco;
class ADroneStream;
class AProjectileBase;
class UBoscoProjectileAbillity;
class UItemUpgrade;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBoscoAbillityComponent : public UActorComponent, public IUpgradable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FABillityChargeProgress OnAbillityChargeProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbillityChargeUsedSig OnAbillityChargeUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityDataUpdated OnAbilityDataUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBoscoAbilityTarget Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectileBase> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADroneStream> StreamClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABosco> AbillityOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> ProjectileUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBoscoProjectileAbillity* AbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InitializeAtBeginPlay;
    
public:
    UBoscoAbillityComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxCharges(bool Total) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharges() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

