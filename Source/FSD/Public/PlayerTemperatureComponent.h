#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlayerTemperatureShowBarDelegate.h"
#include "PlayerTemperatureChangeRateSignatureDelegate.h"
#include "EPlayerTemperatureState.h"
#include "TemperatureComponent.h"
#include "PlayerTemperatureChangedSignatureDelegate.h"
#include "PlayerTemperatureStateChangedSignatureDelegate.h"
#include "PlayerDefrostingSignatureDelegate.h"
#include "PlayerTemperatureComponent.generated.h"

class UStatusEffect;
class APlayerCharacter;
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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefrostTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurnTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DouseFireTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TemperaturRegainSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefrostingRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> OnDefrostedStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NormalTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentTemperature, meta=(AllowPrivateAccess=true))
    float CurrentTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TargetTemperature;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_TemperatureChangeSpeed)
    int8 TemperatureChangeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DefrostProgress, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentTemperature(float OldTemperature);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTemperatureChangedSpeed() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefrostProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTemperatureNormalized() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Defrost(float Amount);
    
};

