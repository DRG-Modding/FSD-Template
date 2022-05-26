#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETemperatureIntensity.h"
#include "TemperatureComponent.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTemperatureComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrozenDamageBonusScale;
    
public:
    UTemperatureComponent();
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
    
};

