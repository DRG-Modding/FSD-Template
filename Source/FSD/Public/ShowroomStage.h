#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "ShowroomStage.generated.h"

class USceneCaptureComponent2D;
class USceneComponent;
class UShowroomController;
class UTextureRenderTarget2D;

UCLASS(Abstract, Blueprintable)
class AShowroomStage : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCapure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* ActiveCaptureComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UShowroomController> ControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UShowroomController* ControllerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
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

