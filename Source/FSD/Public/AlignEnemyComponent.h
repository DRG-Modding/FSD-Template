#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AlignEnemyComponent.generated.h"

UCLASS(BlueprintType)
class UAlignEnemyComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_RotateWhileStationary)
    bool RotateWhileStationary;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRotateWhileStationary(bool Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RotateWhileStationary();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UAlignEnemyComponent();
};

