#pragma once
#include "CoreMinimal.h"
#include "TowerModuleBase.h"
#include "UObject/NoExportTypes.h"
#include "AimingTowerModule.generated.h"

class AActor;

UCLASS(Blueprintable)
class AAimingTowerModule : public ATowerModuleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator AimRotation;
    
    UPROPERTY(EditAnywhere)
    float BurstTime;
    
    UPROPERTY(EditAnywhere)
    float AttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurstSize;
    
public:
    AAimingTowerModule();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

