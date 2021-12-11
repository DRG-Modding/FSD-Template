#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "AdicPuddle.generated.h"

class USphereComponent;
class UPrimitiveComponent;
class USoundBase;
class UStatusEffect;

UCLASS()
class AAdicPuddle : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* SphereTrigger;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* SpawnSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UStatusEffect> InflictedStatusEffect;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float LifeTime;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPuddleEndOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPuddleBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    AAdicPuddle();
};

