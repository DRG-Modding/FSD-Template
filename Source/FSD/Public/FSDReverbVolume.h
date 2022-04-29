#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FSDReverbVolume.generated.h"

class UReverbEffect;
class USphereComponent;

UCLASS(Blueprintable)
class AFSDReverbVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReverbEffect* Reverb;
    
    UPROPERTY(EditAnywhere, Transient)
    float Priority;
    
    AFSDReverbVolume();
};

