#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TrailComponent.generated.h"

class UTrailComponent;
class UWorld;

UCLASS(BlueprintType)
class UTrailComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinRadius;
    
    UPROPERTY(EditAnywhere)
    float MinStep;
    
    UPROPERTY(EditAnywhere)
    float MaxStep;
    
    UPROPERTY(EditAnywhere)
    bool MinimizePath;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<FVector> Trail;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> Query;
    
    UPROPERTY(EditAnywhere)
    bool bDrawPath;
    
    UPROPERTY(EditAnywhere)
    float MaxDrawDistance;
    
    UPROPERTY(EditAnywhere)
    float PathLineWidth;
    
    UPROPERTY(EditAnywhere)
    float PathNodeSize;
    
    UPROPERTY(EditAnywhere)
    FColor DrawColor;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 TrailLength() const;
    
    UFUNCTION(BlueprintCallable)
    void ToggleDrawPath(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTrailPoint(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNextTrailPointFrom(FVector From) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNearestTrailIndex(FVector Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTrailComponent* GetNearestPlayerTrail(UWorld* World, FVector From, float MinDist, float MaxDist);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetDrawColor() const;
    
    UTrailComponent();
};

