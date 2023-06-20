#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ShootingSpiderAnimInstance.h"
#include "SpiderLobberAnimInstance.generated.h"

class UHealthComponentBase;

UCLASS(Blueprintable, NonTransient)
class USpiderLobberAnimInstance : public UShootingSpiderAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector EffectiveLiquidInBum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval LiquidInBumRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LiquidInBumEaseInExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LiquidInBumTimeToMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LiquidInBumTimeToMaxShort;
    
public:
    USpiderLobberAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetAttackIndex(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetLiquidInBum();
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* InHealthComponent);
    
};

