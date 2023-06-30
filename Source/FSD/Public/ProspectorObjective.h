#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "ProspectorObjective.generated.h"

class AProspectorRobot;
class UDebrisPositioning;
class UHealthComponentBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UProspectorObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AProspectorRobot> ProspectorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* DebrisPositioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveProspector, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AProspectorRobot> ActiveProspector;
    
public:
    UProspectorObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveProspector();
    
    UFUNCTION(BlueprintCallable)
    void OnProspectorDeath(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProspectorDead() const;
    
};

