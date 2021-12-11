#pragma once
#include "CoreMinimal.h"
#include "CarriableItem.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ResourcePouch.generated.h"

class UCarriableInstantUsable;
class USoundCue;
class AActor;

UCLASS()
class AResourcePouch : public ACarriableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCarriableInstantUsable* Usable;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ImpactGroundSound;
    
    UFUNCTION(BlueprintCallable)
    void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    AResourcePouch();
};

