#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameEvent.h"
#include "DefenseEvent.generated.h"

class UWidget;

UCLASS()
class ADefenseEvent : public AGameEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefendDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UWidget> DefendWidget;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Progress)
    float Progress;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Progress(float OldValue);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ADefenseEvent();
};

