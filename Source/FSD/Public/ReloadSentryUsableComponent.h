#pragma once
#include "CoreMinimal.h"
#include "UsableComponent.h"
#include "ReloadSentryUsableComponent.generated.h"

class USoundBase;
class APlayerCharacter;
class UAudioComponent;
class ASentryGun;

UCLASS(meta=(BlueprintSpawnableComponent))
class UReloadSentryUsableComponent : public UUsableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OutOfAmmoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AmmoFullText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioOutOfAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioReloading;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ReloadingAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Usable;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_Reloading, meta=(AllowPrivateAccess=true))
    bool bReloading;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ReloadAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoPerSec;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> OwningPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ASentryGun* SentryGun;
    
public:
    UReloadSentryUsableComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetOwningPlayerCharacter(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void SetCanUse(bool isUsable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Reloading();
    
    UFUNCTION(BlueprintCallable)
    void OnReloadAudioFinished();
    
};

