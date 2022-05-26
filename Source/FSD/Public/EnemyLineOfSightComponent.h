#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LoSDelegateDelegate.h"
#include "EnemyLineOfSightComponent.generated.h"

class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UEnemyLineOfSightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoSDelegate OnGaindedLineOfSight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoSDelegate OnLostLineOfSight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMeshComponent* OwnerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoSFromSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoSInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoSIntervalVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoSetupOwnerMesh;
    
public:
    UEnemyLineOfSightComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLineOfSight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDetecting() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AsyncTrace();
    
};

