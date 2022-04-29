#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AlignEnemyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAlignEnemyComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RotateWhileStationary, meta=(AllowPrivateAccess=true))
    bool RotateWhileStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IncludePitch;
    
public:
    UAlignEnemyComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRotateWhileStationary(bool Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RotateWhileStationary();
    
};

