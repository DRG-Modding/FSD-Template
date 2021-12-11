#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerImpactCooldownComponent.generated.h"

class AActor;

UCLASS(BlueprintType)
class FSD_API UPlayerImpactCooldownComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CoolDownTime;
    
public:
    UFUNCTION(BlueprintCallable)
    bool CheckCanImpact(AActor* Actor);
    
    UPlayerImpactCooldownComponent();
};

