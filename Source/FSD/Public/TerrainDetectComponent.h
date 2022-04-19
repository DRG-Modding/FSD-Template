#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TerrainDetectInterface.h"
#include "PointRemovedEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "TerrainDetectComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UTerrainDetectComponent : public USceneComponent, public ITerrainDetectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPointRemovedEvent OnPointRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartDetectOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyDetectOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KillActorOnPointRemoved;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector ActiveDetectPos;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 DetectorId;
    
    UTerrainDetectComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateDetectLocation();
    
    UFUNCTION(BlueprintCallable)
    void StopDetect();
    
    UFUNCTION(BlueprintCallable)
    void StartDetect();
    
    
    // Fix for true pure virtual functions not being implemented
};

