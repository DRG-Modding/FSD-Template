#pragma once
#include "CoreMinimal.h"
#include "DroneStream.h"
#include "DroneVacuumStream.generated.h"

class AFoamPuddle;
class USceneComponent;

UCLASS(Blueprintable)
class ADroneVacuumStream : public ADroneStream {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* VacuumPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFoamPuddle*> PuddlesInside;
    
    ADroneVacuumStream();
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartVacuumingPuddle(AFoamPuddle* puddle);
    
};

