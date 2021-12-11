#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CharacterStateComponent.h"
#include "DeathIntroSettings.h"
#include "DownedStateComponent.generated.h"

class UDamageComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDownedStateComponentOnEnableDownedBombUIEvent, bool, Active);

UCLASS(MinimalAPI)
class UDownedStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FDeathIntroSettings Intro;
    
    UPROPERTY(EditAnywhere)
    float DownedHealthLossPerSecond;
    
    UPROPERTY(EditAnywhere)
    float TerrainRemovedFallThreshold;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool DownedBombActive;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UDamageComponent* DownedBombDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FDownedStateComponentOnEnableDownedBombUIEvent OnEnableDownedBombUIEvent;
    
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
    
    UDownedStateComponent();
};

