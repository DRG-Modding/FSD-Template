#pragma once
#include "CoreMinimal.h"
#include "UsableComponent.h"
#include "ReloadSentryUsableComponent.generated.h"

class UAudioComponent;
class USoundBase;
class APlayerCharacter;
class ASentryGun;

UCLASS()
class UReloadSentryUsableComponent : public UUsableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FText OutOfAmmoText;
    
    UPROPERTY(EditAnywhere)
    FText AmmoFullText;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AudioOutOfAmmo;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AudioReloading;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* ReloadingAudioComponent;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool Usable;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Reloading)
    bool bReloading;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* ReloadAudioComponent;
    
    UPROPERTY(EditAnywhere)
    float AmmoPerSec;
    
    UPROPERTY(Replicated, Transient)
    TWeakObjectPtr<APlayerCharacter> OwningPlayerCharacter;
    
    UPROPERTY(Transient)
    ASentryGun* SentryGun;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOwningPlayerCharacter(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void SetCanUse(bool isUsable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Reloading();
    
    UFUNCTION(BlueprintCallable)
    void OnReloadAudioFinished();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UReloadSentryUsableComponent();
};

