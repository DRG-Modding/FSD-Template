#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TerrainDetectInterface.h"
#include "UObject/NoExportTypes.h"
#include "TerrainDetectComponent.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTerrainDetectComponentOnPointRemoved);

UCLASS(BlueprintType)
class UTerrainDetectComponent : public USceneComponent, public ITerrainDetectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FTerrainDetectComponentOnPointRemoved OnPointRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StartDetectOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OnlyDetectOnServer;
    
    UPROPERTY(EditAnywhere)
    bool KillActorOnPointRemoved;
    
    UPROPERTY(Transient)
    FVector ActiveDetectPos;
    
    UPROPERTY(Transient)
    int32 DetectorId;
    
    UFUNCTION(BlueprintCallable)
    void UpdateDetectLocation();
    
    UFUNCTION(BlueprintCallable)
    void StopDetect();
    
    UFUNCTION(BlueprintCallable)
    void StartDetect();
    
    UTerrainDetectComponent();
    
    // Fix for true pure virtual functions not being implemented
};

