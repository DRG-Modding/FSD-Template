#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "LaserPointerTarget.h"
#include "DroneControllerBase.generated.h"

class ADroneBase;
class APlayerCharacter;

UCLASS(Blueprintable)
class ADroneControllerBase : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> ControllingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADroneBase* ControlledDrone;
    
    ADroneControllerBase();
    UFUNCTION(BlueprintCallable)
    void OnShout(APlayerCharacter* ShoutingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnSecondaryLaserPointer(const FLaserPointerTarget& HitInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnSalute(APlayerCharacter* aCharacater);
    
    UFUNCTION(BlueprintCallable)
    void OnPrimaryLaserpointer(const FLaserPointerTarget& HitInfo);
    
};

