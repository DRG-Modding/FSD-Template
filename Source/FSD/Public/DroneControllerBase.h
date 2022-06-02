#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "LaserPointerTarget.h"
#include "DroneControllerBase.generated.h"

class APlayerCharacter;
class ADroneBase;
class AActor;

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
    void OnSecondaryLaserPointer(AActor* aTarget, const FVector& aLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnSalute(APlayerCharacter* aCharacater);
    
    UFUNCTION(BlueprintCallable)
    void OnPrimaryLaserpointer(const FLaserPointerTarget& HitInfo);
    
};

