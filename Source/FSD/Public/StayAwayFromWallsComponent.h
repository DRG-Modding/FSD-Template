#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "StayAwayFromWallsComponent.generated.h"

class AFSDGameState;

UCLASS(BlueprintType)
class UStayAwayFromWallsComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AFSDGameState* GameState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Acceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BackAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PointOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AvoidSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GoBackSpeed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool Active;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsActive(const bool IsActive);
    
    UStayAwayFromWallsComponent();
};

