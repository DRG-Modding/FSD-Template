#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TemperatureComponent.h"
#include "PlayerTemperatureStateChangedSignatureDelegate.h"
#include "PlayerTemperatureChangedSignatureDelegate.h"
#include "PlayerTemperatureChangeRateSignatureDelegate.h"
#include "PlayerDefrostingSignatureDelegate.h"
#include "EPlayerTemperatureState.h"
#include "PlayerTemperatureShowBarDelegate.h"
#include "PlayerTemperatureComponent.generated.h"

class APlayerCharacter;
class UStatusEffect;
class UHealthComponentBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerTemperatureComponent : public UTemperatureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerTemperatureChangedSignature OnTemperatureChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerTemperatureStateChangedSignature OnTemperatureStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerTemperatureChangeRateSignature OnTemperatureChangeRate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDefrostingSignature OnDefrosting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerTemperatureShowBar OnBarVisibilityChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    float MinimumTemperature;
    
    UPROPERTY(EditAnywhere)
    float MaximumTemperature;
    
    UPROPERTY(EditAnywhere)
    float DefrostTemperature;
    
    UPROPERTY(EditAnywhere)
    float BurnTemperature;
    
    UPROPERTY(EditAnywhere)
    float DouseFireTemperature;
    
    UPROPERTY(EditAnywhere)
    float TemperaturRegainSpeed;
    
    UPROPERTY(EditAnywhere)
    float DefrostingRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> OnDefrostedStatusEffect;
    
    UPROPERTY(EditAnywhere, Transient)
    float NormalTemperature;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentTemperature)
    float CurrentTemperature;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    float TargetTemperature;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_TemperatureChangeSpeed)
    int8 TemperatureChangeSpeed;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_DefrostProgress)
    float DefrostProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool barVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TemperatureState, meta=(AllowPrivateAccess=true))
    EPlayerTemperatureState TemperatureState;
    
public:
    UPlayerTemperatureComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNormalTemperature();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetFrozenTemperature();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TemperatureState(EPlayerTemperatureState oldState);
    
    UFUNCTION()
    void OnRep_TemperatureChangeSpeed(int8 OldSpeed);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DefrostProgress();
    
    UFUNCTION()
    void OnRep_CurrentTemperature(float OldTemperature);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTemperatureChangedSpeed() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetDefrostProgress() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentTemperatureNormalized() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Defrost(float Amount);
    
};

