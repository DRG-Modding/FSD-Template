#pragma once
#include "CoreMinimal.h"
#include "TemperatureComponent.h"
#include "OnStartBurningDelegate.h"
#include "ObjectTemperatureComponent.generated.h"

class UHealthComponentBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UObjectTemperatureComponent : public UTemperatureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartBurning OnStartBurning;
    
protected:
    UPROPERTY(EditAnywhere)
    float TemperatureChangeScale;
    
    UPROPERTY(EditAnywhere)
    float BurnTemperature;
    
    UPROPERTY(EditAnywhere)
    float DouseFireTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CoolingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHeatsourceWhenOnFire;
    
    UPROPERTY(EditAnywhere)
    float OnFireHeatRange;
    
public:
    UObjectTemperatureComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void TimerCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* HealthComponent);
    
};

