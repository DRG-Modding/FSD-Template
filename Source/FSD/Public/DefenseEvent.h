#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameEvent.h"
#include "DefenseEvent.generated.h"

class UWidget;

UCLASS(Blueprintable)
class ADefenseEvent : public AGameEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DefendDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidget> DefendWidget;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_Progress)
    float Progress;
    
public:
    ADefenseEvent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_Progress(float OldValue);
    
};

