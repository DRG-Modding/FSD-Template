#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorTrackingCheatInterface.h"
#include "JetBootsBox.generated.h"

class USpecialEvent;
class UTerrainPlacementComponent;

UCLASS(Blueprintable)
class AJetBootsBox : public AActor, public IActorTrackingCheatInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTerrainPlacementComponent* terrainPlacement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialEvent* SpecialEvent;
    
public:
    AJetBootsBox();
    
    // Fix for true pure virtual functions not being implemented
};

