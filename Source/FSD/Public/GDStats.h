#pragma once
#include "CoreMinimal.h"
#include "GDStats.generated.h"

class UPawnStat;

USTRUCT(BlueprintType)
struct FGDStats {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPawnStat* MaxAmmo;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* MaxShields;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* ShieldRegenerationRate;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* MaxHealth;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* DamageResistance;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* FireResistance;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* ColdResistance;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* MeleeAttackDamage;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* MovementSpeed;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* SprintSpeed;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* CarryingSpeedModifier;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* ReviveSpeed;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* DepositSpeed;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* RessuplySpeed;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* RedSugarHeal;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* CarryingCapacity;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* ZiplineSpeed;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* ZiplineDownwardsBoost;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* SlideDownIce;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* FriendlyFire;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* DamageFromPlayers;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* DamageBonus;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* FlareThrowingStrength;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* CaveLeechSense;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* MorkiteMining;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* GoldMining;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* RockMiningStrength;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* DirtMiningStrength;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* ResourceMiningStrength;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* PowerAttackCooldownRate;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* ImpactCompensation;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* MovementSpeedPenalty;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* MovementSpeedPenaltyReduction;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* MovementSpeedEnvironmentalPenalty;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* MovementSpeedEnvironmentalPenaltyReduction;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* CarriableThrowing;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* HoverBootsDuration;
    
    FSD_API FGDStats();
};

