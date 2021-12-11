#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "ObstructionChecker.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObstructionCheckerOnObstructionChangedEvent, float, Distance);

UCLASS(BlueprintType)
class UObstructionChecker : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FObstructionCheckerOnObstructionChangedEvent OnObstructionChangedEvent;
    
protected:
    UPROPERTY(EditAnywhere)
    float DistanceToCheck;
    
    UPROPERTY(EditAnywhere)
    float CheckInterval;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> RayOffsets;
    
    UFUNCTION(BlueprintCallable)
    void Timer_Tick();
    
    UFUNCTION(BlueprintCallable)
    void Timer_Result();
    
public:
    UFUNCTION(BlueprintCallable)
    void CheckForObstructions();
    
    UObstructionChecker();
};

