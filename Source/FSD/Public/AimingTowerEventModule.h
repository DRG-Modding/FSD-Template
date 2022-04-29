#pragma once
#include "CoreMinimal.h"
#include "TowerEventModule.h"
#include "UObject/NoExportTypes.h"
#include "AimingTowerEventModule.generated.h"

class AActor;

UCLASS(Blueprintable)
class AAimingTowerEventModule : public ATowerEventModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator AimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
public:
    AAimingTowerEventModule();
};

