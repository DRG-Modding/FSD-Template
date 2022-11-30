#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "Upgradable.h"
#include "AbillityChargeUsedSigDelegate.h"
#include "ABillityChargeProgressDelegate.h"
#include "AbilityDataUpdatedDelegate.h"
#include "BoscoAbilityTarget.h"
#include "BoscoAbillityComponent.generated.h"

class AProjectileBase;
class UItemUpgrade;
class ADroneStream;
class ABosco;
class UBoscoProjectileAbillity;

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
    
    UPROPERTY(EditAnywhere, Transient)
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

