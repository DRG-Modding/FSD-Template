#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Skinnable.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Magazine.generated.h"

class USoundCue;
class USkinEffect;

UCLASS()
class AMagazine : public AActor, public ISkinnable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    USoundCue* ImpactGroundSound;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemSkinned(USkinEffect* Skin);
    
    UFUNCTION(BlueprintCallable)
    void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    AMagazine();
    
    // Fix for true pure virtual functions not being implemented
};

