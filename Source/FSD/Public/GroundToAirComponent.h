#pragma once
#include "CoreMinimal.h"
#include "StateStats.h"
#include "Components/ActorComponent.h"
#include "ChangedStateSigDelegate.h"
#include "GroundToAirComponent.generated.h"

class ADeepPathfinderCharacter;
class UDeepPathfinderMovement;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGroundToAirComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangedStateSig OnChangedPathfinderState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDeepPathfinderMovement* CurrentMove;
    
    UPROPERTY(EditAnywhere)
    float WalkTime;
    
    UPROPERTY(EditAnywhere)
    float WalkTimeMaxRandomOffset;
    
    UPROPERTY(EditAnywhere)
    float WalkTimeMinRandomOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WalkUseTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateStats WalkStats;
    
    UPROPERTY(EditAnywhere)
    float FlyTime;
    
    UPROPERTY(EditAnywhere)
    float FlyTimeMaxRandomOffset;
    
    UPROPERTY(EditAnywhere)
    float FlyTimeMinRandomOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlyUseTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateStats FlyStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StateChange, meta=(AllowPrivateAccess=true))
    bool IsFlying;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ADeepPathfinderCharacter> OwningPathfinder;
    
public:
    UGroundToAirComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetIsFlying(bool aIsFlying);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowedToChangeState(bool aIsAllowed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StateChange();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsWalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFlying() const;
    
    UFUNCTION(BlueprintCallable)
    void Engage();
    
};

