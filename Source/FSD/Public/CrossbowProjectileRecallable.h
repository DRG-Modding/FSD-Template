#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "CrossbowProjectileRecallable.generated.h"

class APlayerCharacter;

UCLASS(meta=(BlueprintSpawnableComponent))
class FSD_API UCrossbowProjectileRecallable : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_SetRecallTarget, meta=(AllowPrivateAccess=true))
    APlayerCharacter* RecallTarget;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float RecallStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float RecallSpeed;
    
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    FTransform StartTransform;
    
public:
    UCrossbowProjectileRecallable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetRecallTarget(APlayerCharacter* Player, const FTransform& startTrans);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetRecallTarget();
    
};

