#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EDroneActions.h"
#include "DroneDisplayActionComponent.generated.h"

class UTextRenderComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDroneDisplayActionComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* DisplayText;
    
public:
    UDroneDisplayActionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMode(EDroneActions droneAction);
    
};

