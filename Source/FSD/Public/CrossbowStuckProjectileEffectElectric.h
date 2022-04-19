#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CrossbowStuckProjectileEffect.h"
#include "CrossbowStuckProjectileEffectElectric.generated.h"

class ACrossbowElectroBeam;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCrossbowStuckProjectileEffectElectric : public UCrossbowStuckProjectileEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACrossbowElectroBeam> PlasmaBeamClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ElectrocutionActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float PlasmaLineMaxRange;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ElectrocutionActor;
    
public:
    UCrossbowStuckProjectileEffectElectric();
    UFUNCTION(BlueprintCallable)
    void OnElectrocutionActorDestroyed(AActor* Actor);
    
};

