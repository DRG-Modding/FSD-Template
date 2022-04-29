#pragma once
#include "CoreMinimal.h"
#include "CharacterSightSensorBase.h"
#include "CharacterSightSensor.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCharacterSightSensor : public UCharacterSightSensorBase {
    GENERATED_BODY()
public:
    /*UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterSightSensorDelegate OnSensorActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterSightSensorDelegate OnSensorDeactivated;*/
    
protected:
    UPROPERTY(EditAnywhere)
    float SensorActiveForMinDuration;
    
    UPROPERTY(EditAnywhere)
    float MinimumDistance;
    
    UPROPERTY(EditAnywhere)
    float MaximumDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> RestrictToColliders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSensorActivated;
    
    UPROPERTY(EditAnywhere)
    float TimeActive;
    
    UPROPERTY(EditAnywhere)
    float LastSeenTime;
    
public:
    UCharacterSightSensor();
};

