#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PathfinderDebugProbe.generated.h"

UCLASS(Blueprintable)
class APathfinderDebugProbe : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Dest;
    
    APathfinderDebugProbe();
};

