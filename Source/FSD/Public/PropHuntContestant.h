#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECharacterCameraMode.h"
#include "ECharacterState.h"
#include "EPropHuntEndScreen.h"
#include "EPropHuntRole.h"
#include "PropHuntContestantState.h"
#include "PropHuntContestant.generated.h"

class AActor;
class AItem;
class APlayerCharacter;
class APropHuntDisguiseActor;
class UPropHuntContestant;
class UPropHuntOverlayWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UPropHuntContestant : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPropHuntDelegate, UPropHuntContestant*, ContestantComponent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropHuntDelegate OnStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    FPropHuntContestantState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPropHuntContestantState previousState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APropHuntDisguiseActor> DisguiseActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPropHuntOverlayWidget> OverlayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPropHuntContestantState CurrentState;
    
public:
    UPropHuntContestant(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateChanged(ECharacterState InState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPassedOut(APlayerCharacter* InPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDestroyed(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCameraChanged(ECharacterCameraMode OldMode, ECharacterCameraMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void OnItemUnequipped(AItem* InItem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingLives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPropHuntRole GetPropHuntRole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLives() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowEndScreen(EPropHuntEndScreen EndScreenType, bool GameWon);
    
};

