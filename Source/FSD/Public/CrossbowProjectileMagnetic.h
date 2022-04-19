#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "CrossbowProjectileMagnetic.generated.h"

class UStatusEffect;
class AFSDPawn;

UCLASS(meta=(BlueprintSpawnableComponent))
class FSD_API UCrossbowProjectileMagnetic : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> ElectricEffects;
    
private:
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDPawn> TargetEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float OverlapCheckSize;
    
public:
    UCrossbowProjectileMagnetic();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

