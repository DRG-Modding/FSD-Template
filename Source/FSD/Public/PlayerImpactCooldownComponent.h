#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerImpactCooldownComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UPlayerImpactCooldownComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownTime;
    
public:
    UPlayerImpactCooldownComponent();
    UFUNCTION(BlueprintCallable)
    bool CheckCanImpact(AActor* Actor);
    
};

