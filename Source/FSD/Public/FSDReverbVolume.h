#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FSDReverbVolume.generated.h"

class USphereComponent;
class UReverbEffect;

UCLASS()
class AFSDReverbVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* Collision;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UReverbEffect* Reverb;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float Priority;
    
    AFSDReverbVolume();
};

