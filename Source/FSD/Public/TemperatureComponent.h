#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETemperatureIntensity.h"
#include "TemperatureComponent.generated.h"

class AActor;

UCLASS(Abstract, BlueprintType)
class UTemperatureComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float FrozenDamageBonusScale;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool TryPushHeatSource(AActor* Target, float Temperature, ETemperatureIntensity Intensity);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool TryPopHeatSource(AActor* Target, float Temperature, ETemperatureIntensity Intensity);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetTemperature();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    float GetCurrentTemperature() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeTemperature(float Degrees, AActor* Source);
    
    UTemperatureComponent();
};

