#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DelegateDelegate.h"
#include "SeasonReplicatorComponent.generated.h"

class USeason;
class USeasonEventData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USeasonReplicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnHostSeasonSetEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HostActiveSeason, meta=(AllowPrivateAccess=true))
    USeason* HostActiveSeason;
    
    USeasonReplicatorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HostActiveSeason();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CompleteSeasonEvent(USeasonEventData* InEvent);
    
};

