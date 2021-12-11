#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DestinationActorComponent.generated.h"

class AActor;

UCLASS(BlueprintType)
class FSD_API UDestinationActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    TWeakObjectPtr<AActor> DestinationActor;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistToDestinationActor() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UDestinationActorComponent();
};

