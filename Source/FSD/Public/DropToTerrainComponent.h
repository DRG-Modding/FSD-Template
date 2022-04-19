#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "OnIsFallingToTerrainChangedDelegate.h"
#include "DropToTerrainComponent.generated.h"

class UTerrainDetectComponent;
class USceneComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UDropToTerrainComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTerrainDetectComponent*> TerrainPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TerrainTraceMaxDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnIsFallingToTerrainChanged OnFallToTerrainStateChanged;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector CurrentLocation;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector DropTarget;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool IsDetecting;
    
public:
    UDropToTerrainComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void StopDropDetection(bool stopFalling);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void SetParentPositionOnAll(FVector CurrentParentLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnTerrainRemoved(USceneComponent* Point);
    
    UFUNCTION(BlueprintCallable)
    void BeginDropDetection();
    
};

