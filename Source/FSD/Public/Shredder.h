#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "Shredder.generated.h"

class AActor;

UCLASS()
class AShredder : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float FoldoutRange;
    
    UPROPERTY(EditAnywhere)
    float SpinRange;
    
    UPROPERTY(Replicated, Transient)
    AActor* CurrentTarget;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AShredder();
};

