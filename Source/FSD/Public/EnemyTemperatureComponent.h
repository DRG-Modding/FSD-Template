#pragma once
#include "CoreMinimal.h"
#include "TemperatureComponent.h"
#include "DamageData.h"
#include "EnemyTemperatureComponent.generated.h"

class UDamageTag;
class UStatusEffectsComponent;
class UHealthComponent;
class UEnemyDetonationSetting;
class UPawnStatsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnemyTemperatureComponent : public UTemperatureComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float UpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DieIfFrozen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DieIfBurning;
    
    UPROPERTY(EditAnywhere)
    float TemperatureChangeScale;
    
    UPROPERTY(EditAnywhere)
    float BurnTemperature;
    
    UPROPERTY(EditAnywhere)
    float DouseFireTemperature;
    
    UPROPERTY(EditAnywhere)
    float FreezeTemperature;
    
    UPROPERTY(EditAnywhere)
    float UnFreezeTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WarmingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CoolingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHeatsourceWhenOnFire;
    
    UPROPERTY(EditAnywhere)
    float OnFireHeatRange;
    
    UPROPERTY(EditAnywhere)
    float MaxColdSlowdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyDetonationSetting* DetonationSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WarmingCooldown;
    
    UPROPERTY(EditAnywhere, Transient)
    uint8 FireDetonationStack;
    
    UPROPERTY(EditAnywhere, Transient)
    uint8 IceDetonationStack;
    
public:
    UEnemyTemperatureComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void TimerCallback();
    
    UFUNCTION()
    void OnDeath(UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable)
    void DoTemperatureShock(UStatusEffectsComponent* Status);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_IceDetonation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_FireDetonation();
    
};

