#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UsableRepliactional.h"
#include "EUseRestriction.h"
#include "ECharacterState.h"
#include "ECustomUsableType.h"
#include "CharacterUseComponent.generated.h"

class UResourceBank;
class USceneComponent;
class UUsableComponentBase;
class USphereComponent;
class USoundBase;
class APlayerCharacter;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterUseComponentOnDepositingEnd, UResourceBank*, ResourceBank);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterUseComponentOnDepositingBegin, UResourceBank*, ResourceBank);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterUseComponentOnEndUsingEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterUseComponentOnBeginUsingEvent, UUsableComponentBase*, Component);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterUseComponentOnEndHoveringEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterUseComponentOnBeginHoveringEvent, UUsableComponentBase*, Component);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterUseComponentOnEndUseNoUsable);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterUseComponentOnBeginUseNoUsable);

UCLASS(BlueprintType)
class UCharacterUseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnDepositingBegin OnDepositingBegin;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnDepositingEnd OnDepositingEnd;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnBeginHoveringEvent OnBeginHoveringEvent;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnEndHoveringEvent OnEndHoveringEvent;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnBeginUsingEvent OnBeginUsingEvent;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnEndUsingEvent OnEndUsingEvent;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnBeginUseNoUsable OnBeginUseNoUsable;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterUseComponentOnEndUseNoUsable OnEndUseNoUsable;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ActiveUsablee)
    FUsableRepliactional ActiveUsablee;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UUsableComponentBase* HoveringUsable;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    USceneComponent* HoveringUsableCollider;
    
    UPROPERTY(Export, Transient)
    USceneComponent* ActiveUsableCollider;
    
    UPROPERTY(Export, Transient)
    USphereComponent* UseCollider;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AudioBeginDepositing;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AudioEndDepositing;
    
    UPROPERTY(EditAnywhere)
    float UseDistance;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    EUseRestriction UseRestriction;
    
    UPROPERTY(Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(Transient)
    TMap<UUsableComponentBase*, float> UseCooldownTracker;
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCanUse(EUseRestriction NewUseRestriction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EndUse();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_BeginUse(uint8 Key, UUsableComponentBase* Usable, USceneComponent* UsableCollider);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveUsablee(FUsableRepliactional lastUsable);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterStateChanged(ECharacterState NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookingAtUsable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookingAtDepositable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUseProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLookingAtActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUsing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDepositing();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_PlaySingleUse(uint8 Key, UUsableComponentBase* Usable);
    
    UFUNCTION(BlueprintCallable)
    void AddCustomUsableComponent(UUsableComponentBase* Usable, ECustomUsableType eType);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCharacterUseComponent();
};

