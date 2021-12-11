#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "ShowroomStage.generated.h"

class USceneComponent;
class USceneCaptureComponent2D;
class UShowroomController;
class UTextureRenderTarget2D;

UCLASS(Abstract)
class AShowroomStage : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneCaptureComponent2D* SceneCapure;
    
    UPROPERTY(Export, Transient)
    USceneCaptureComponent2D* ActiveCaptureComponent;
    
protected:
    UPROPERTY(Transient)
    TSubclassOf<UShowroomController> ControllerClass;
    
    UPROPERTY(Export, Transient)
    UShowroomController* ControllerInstance;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneCaptureComponent2D* SceneCapture;
    
    UPROPERTY(EditAnywhere)
    float MinPitch;
    
    UPROPERTY(EditAnywhere)
    float MaxPitch;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneComponent* CameraFocusPoint;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInitialize(UTextureRenderTarget2D* RenderTarget);
    
public:
    UFUNCTION(BlueprintCallable)
    USceneCaptureComponent2D* GetActiveCaptureComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextureRenderTarget2D* CreateRenderTarget();
    
    AShowroomStage();
};

