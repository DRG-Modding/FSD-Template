#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "ShowroomStage.generated.h"

class UTextureRenderTarget2D;
class USceneComponent;
class USceneCaptureComponent2D;
class UShowroomController;

UCLASS(Abstract)
class AShowroomStage : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCapure;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* ActiveCaptureComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UShowroomController> ControllerClass;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UShowroomController* ControllerInstance;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPitch;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* CameraFocusPoint;
    
public:
    AShowroomStage();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInitialize(UTextureRenderTarget2D* RenderTarget);
    
public:
    UFUNCTION(BlueprintCallable)
    USceneCaptureComponent2D* GetActiveCaptureComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextureRenderTarget2D* CreateRenderTarget();
    
};

