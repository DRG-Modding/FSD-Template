#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CharacterStateComponent.h"
#include "DeathIntroSettings.h"
#include "EnableDownedBombUIDelegateDelegate.h"
#include "DownedStateComponent.generated.h"

class UDamageComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDownedStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathIntroSettings Intro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedHealthLossPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TerrainRemovedFallThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DownedBombActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UDamageComponent* DownedBombDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnableDownedBombUIDelegate OnEnableDownedBombUIEvent;
    
public:
    UDownedStateComponent();
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TriggerDownedBombDamage();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TriggerDownedBomb();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_TriggerDownedBomb();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UDamageComponent* CreateDownedBombDamage(TSubclassOf<UDamageComponent> DamageClass);
    
};

