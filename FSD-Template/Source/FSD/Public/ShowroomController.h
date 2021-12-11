#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ShowroomController.generated.h"

class AShowroomStage;
class AActor;

UCLASS(Abstract, BlueprintType)
class UShowroomController : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AShowroomStage* Stage;
    
    UFUNCTION(BlueprintCallable)
    void SetLightChannels(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void RotateShowroom(float Pitch, float Yaw);
    
    UFUNCTION(BlueprintCallable)
    void ResetShowroomRotation();
    
    UFUNCTION(BlueprintCallable)
    FRotator GetShowroomRotation();
    
    UShowroomController();
};

