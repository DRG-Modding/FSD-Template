#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "AttackBaseComponent.generated.h"

class UAttackBaseComponent;
class AActor;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAttackBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSurfaceAngle;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
public:
    UAttackBaseComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UAttackBaseComponent* ReplaceAttackComponent(UAttackBaseComponent* componentToReplace, TSubclassOf<UAttackBaseComponent> newComponentClass);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveCompleteAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAttackTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAbortAttack();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxRange() const;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CompleteAttack(bool success);
    
public:
    UFUNCTION(BlueprintCallable)
    void AttackTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void AbortAttack();
    
};

