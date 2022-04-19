#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnNoTargetHitDelegate.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "OnEnemyDamagedDelegateDelegate.h"
#include "OnEnemyKilledDelegateDelegate.h"
#include "OnAsyncAoE_CompleteDelegate.h"
#include "EDamageComponentType.h"
#include "EArmorDamageType.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DamageComponent.generated.h"

class UDamageImpulse;
class UDamageClass;
class UDamageBonusBase;
class AActor;
class UDamageModifier;
class UDamageTag;
class UDamageComponent;
class UPrimitiveComponent;
class UFSDPhysicalMaterial;

UCLASS(BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnEnemyKilledDelegate OnTargetKilledEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnEnemyDamagedDelegate OnTargetDamagedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnNoTargetHit OnNoTargetHitEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnNoTargetHit OnHitDeadTarget;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnAsyncAoE_Complete OnAsyncAoE_Complete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageComponentType DamageComponentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageImpulse* DamageImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShattersArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArmorDamageType ArmorDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeakpointDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrozenDamageBonusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float friendlyFireModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfFriendlyFireMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FriendlyFireTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StaggerOnlyOnWeakpointHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FearFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UDamageBonusBase*> DamageBonuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UDamageModifier*> DamageModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageTag*> damageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAreaOfEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadialDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NoFriendlyFireFromRadial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* RadialDamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDamagePct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDamageRadius;
    
public:
    UDamageComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PreTestDamageConditions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDamageComponent* GetDamageComponentCDO(TSubclassOf<UDamageComponent> DamageComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamage() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void DamageTargetFromHit(const FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DamageTarget_CDO(const FVector& Location, AActor* Owner, AActor* hitActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void DamageTarget(AActor* Target, const FVector& Location, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysMat, int32 BoneIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DamageArmor_Server(AActor* Target, UPrimitiveComponent* collider, int32 BoneIndex, const FVector& impactLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DamageArmor_All(AActor* Target, UPrimitiveComponent* collider, int32 BoneIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ArmorSupportsLocalOnlyCall(AActor* Target) const;
    
};

