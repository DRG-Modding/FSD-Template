#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "ShootingPlant.generated.h"

class AActor;

UCLASS()
class AShootingPlant : public AEnemyPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    bool IsVisible;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Target)
    AActor* Target;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* NewTarget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Target();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AShootingPlant();
};

