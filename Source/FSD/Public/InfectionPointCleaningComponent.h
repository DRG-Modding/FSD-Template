#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DelegateDelegate.h"
#include "ECleanedStatus.h"
#include "InfectionPointCleaningComponent.generated.h"

class UDifficultySetting;
class UMeshComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInfectionPointCleaningComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnPointVacuumed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnPointFoamed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenReplicated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UDifficultySetting*, int32> DifficultyModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* CleanedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float particleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool outerLayerCleaned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InfectionPoints, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ECleanedStatus>> InfectionPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> OuterLayerMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> InnerLayerMeshes;
    
public:
    UInfectionPointCleaningComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Reset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InfectionPoints(TArray<TEnumAsByte<ECleanedStatus>> oldInfectionPoints);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitInfectionPoints(const TArray<UMeshComponent*>& outerMeshes, const TArray<UMeshComponent*>& innerMeshes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredCleanCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingInfectedPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfInfectedPoints() const;
    
};

