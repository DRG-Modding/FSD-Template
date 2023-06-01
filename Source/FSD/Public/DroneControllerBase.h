#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "LaserPointerTarget.h"
#include "DroneControllerBase.generated.h"

class AFSDPlayerState;
class APlayerCharacter;

UCLASS(Blueprintable)
class ADroneControllerBase : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APlayerCharacter>> ControllingPlayers;
    
public:
    ADroneControllerBase();
    UFUNCTION(BlueprintCallable)
    void OnShout(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnSecondaryLaserPointer(const FLaserPointerTarget& HitInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnSalute(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnPrimaryLaserpointer(const FLaserPointerTarget& HitInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLeave(AFSDPlayerState* State);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoin(APlayerCharacter* Player);
    
};

