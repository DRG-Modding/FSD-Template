#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "TerrainDetectInterface.h"
#include "PointRemovedEventDelegate.h"
#include "TerrainDetectBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTerrainDetectBoxComponent : public UBoxComponent, public ITerrainDetectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointRemovedEvent OnBoxExcavated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartDetectOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyDetectOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCornersToExcavate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumCornersExcavated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KillActorOnPointRemoved;
    
    UTerrainDetectBoxComponent();
    UFUNCTION(BlueprintCallable)
    void StartDetect();
    
    
    // Fix for true pure virtual functions not being implemented
};

