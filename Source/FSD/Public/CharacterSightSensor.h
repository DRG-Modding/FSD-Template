#pragma once
#include "CoreMinimal.h"
#include "CharacterSightSensorBase.h"
#include "CharacterSightSensor.generated.h"

class UPrimitiveComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCharacterSightSensor : public UCharacterSightSensorBase {
    GENERATED_BODY()
public:
    /*UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCharacterSightSensorDelegate OnSensorActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCharacterSightSensorDelegate OnSensorDeactivated;*/
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SensorActiveForMinDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDistance;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> RestrictToColliders;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bSensorActivated;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TimeActive;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float LastSeenTime;
    
public:
    UCharacterSightSensor();
};

