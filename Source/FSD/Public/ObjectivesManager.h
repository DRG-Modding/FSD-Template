#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DelegateEventDelegate.h"
#include "ObjectivesManager.generated.h"

class UObjective;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UObjectivesManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnObjectivesCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnObjectivesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnAllRequiredReturnObjectivesCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UObjective* Objective;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObjective*> SecondaryObjectives;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool ObjectivesInitialized;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool ObjectivesStarted;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bCheatObjectivesCompleted;
    
public:
    UObjectivesManager();
protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveChanged(UObjective* obj);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObjective* GetSecondaryObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObjective* GetPrimaryObjective() const;
    
    UFUNCTION(BlueprintCallable)
    void ExitPodDescending();
    
    UFUNCTION(BlueprintCallable)
    void ExitPodArrived();
    
    UFUNCTION(BlueprintCallable)
    void DropPodExited();
    
};

