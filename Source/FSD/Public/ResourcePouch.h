#pragma once
#include "CoreMinimal.h"
#include "CarriableItem.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ResourcePouch.generated.h"

class AActor;
class UCarriableInstantUsable;
class USoundCue;

UCLASS()
class AResourcePouch : public ACarriableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCarriableInstantUsable* Usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ImpactGroundSound;
    
public:
    AResourcePouch();
protected:
    UFUNCTION(BlueprintCallable)
    void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
};

