#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "StayAwayFromWallsComponent.generated.h"

class AFSDGameState;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UStayAwayFromWallsComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AFSDGameState* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoBackSpeed;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool Active;
    
public:
    UStayAwayFromWallsComponent();
    UFUNCTION(BlueprintCallable)
    void SetIsActive(const bool IsActive);
    
};

