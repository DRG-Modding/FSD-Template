#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DestinationActorComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UDestinationActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Replicated, Transient)
    TWeakObjectPtr<AActor> DestinationActor;
    
public:
    UDestinationActorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistToDestinationActor() const;
    
};

