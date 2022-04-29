#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "StayAwayFromWallsComponent.generated.h"

class AFSDGameState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStayAwayFromWallsComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFSDGameState* GameState;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float Acceleration;
    
    UPROPERTY(EditAnywhere)
    float BackAcceleration;
    
    UPROPERTY(EditAnywhere)
    float PointOffset;
    
    UPROPERTY(EditAnywhere)
    float AvoidSpeed;
    
    UPROPERTY(EditAnywhere)
    float GoBackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Active;
    
public:
    UStayAwayFromWallsComponent();
    UFUNCTION(BlueprintCallable)
    void SetIsActive(const bool IsActive);
    
};

