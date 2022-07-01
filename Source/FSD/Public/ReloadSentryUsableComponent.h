#pragma once
#include "CoreMinimal.h"
#include "UsableComponent.h"
#include "ReloadSentryUsableComponent.generated.h"

class APlayerCharacter;
class USoundBase;
class UAudioComponent;
class ASentryGun;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ReloadingAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Reloading, meta=(AllowPrivateAccess=true))
    bool bReloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ReloadAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoPerSec;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    TWeakObjectPtr<APlayerCharacter> OwningPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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

