#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ShowroomController.generated.h"

class AActor;
class AShowroomStage;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UShowroomController : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AShowroomStage* Stage;
    
public:
    UShowroomController();
protected:
    UFUNCTION(BlueprintCallable)
    void SetLightChannels(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void RotateShowroom(float Pitch, float Yaw);
    
    UFUNCTION(BlueprintCallable)
    void ResetShowroomRotation();
    
    UFUNCTION(BlueprintCallable)
    FRotator GetShowroomRotation();
    
};

