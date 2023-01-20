#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "PointRemovedEventDelegate.h"
#include "TerrainDetectInterface.h"
#include "TerrainDetectComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTerrainDetectComponent : public USceneComponent, public ITerrainDetectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointRemovedEvent OnPointRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartDetectOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyDetectOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KillActorOnPointRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ActiveDetectPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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

