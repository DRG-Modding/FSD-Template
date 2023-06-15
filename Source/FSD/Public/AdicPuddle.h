#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "AdicPuddle.generated.h"

class APlayerCharacter;
class UPrimitiveComponent;
class USoundBase;
class USphereComponent;
class UStatusEffect;

UCLASS(Blueprintable)
class AAdicPuddle : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SpawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> InflictedStatusEffect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
public:
    AAdicPuddle();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnPlayerBeginOverlap(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnPuddleEndOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPuddleBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

