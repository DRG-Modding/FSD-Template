#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EnemyPawn.h"
#include "UObject/NoExportTypes.h"
#include "TentacleBase.generated.h"

class USplineComponent;
class USceneComponent;
class AStabberVineRoot;

UCLASS(Abstract)
class ATentacleBase : public AEnemyPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTransform RestTransform;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float HeadMovementDuration;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float CanSwayCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SwayRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NeckBaseTangentLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NeckBasePositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NeckBaseTangentOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NeckTopTangentLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationTentacleRetract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationTentacleFoldout;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* HeadRoot;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* HeadRotator;
    
public:
    ATentacleBase();
    UFUNCTION(BlueprintCallable)
    void SetRestingTransform(const FTransform& restingTransform, bool startAtRest);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Recieve_OnRep_Owner();
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveHydraHead(FTransform newDesiredTransform, float newCanSwayCooldown, float newHeadMovementDuration, bool UseSpring);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStabberVineRoot* GetStabberVineRoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USceneComponent* GetHeadRotator();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USceneComponent* GetHeadRoot();
    
};

