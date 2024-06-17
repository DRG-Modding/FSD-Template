#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RunningMissionBP.h"
#include "BloodSugarBP.generated.h"

class AActor;
class UDamageClass;
class UResourceData;

UCLASS(Blueprintable)
class UBloodSugarBP : public URunningMissionBP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AwardSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthLossInverval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthLossPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHealthAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
public:
    UBloodSugarBP();

protected:
    UFUNCTION(BlueprintCallable)
    void Timer_Tick();
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(const FGameplayTagContainer& GameplayTags, AActor* killedEnemy);
    
};

