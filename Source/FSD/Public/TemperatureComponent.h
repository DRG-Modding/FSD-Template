#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETemperatureIntensity.h"
#include "TemperatureStatusChangedDelegate.h"
#include "TemperatureComponent.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTemperatureComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTemperatureStatusChanged OnTemperatureStatusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrozenDamageBonusScale;
    
public:
    UTemperatureComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool TryPushHeatSource(AActor* Target, float temperature, ETemperatureIntensity Intensity);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool TryPopHeatSource(AActor* Target, float temperature, ETemperatureIntensity Intensity);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetTemperature();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrozen() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    float GetCurrentTemperature() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeTemperature(float Degrees, AActor* Source);
    
};

