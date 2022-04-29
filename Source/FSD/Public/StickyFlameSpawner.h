#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "StickyFlameSpawner.generated.h"

class AStickyFlame;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStickyFlameSpawner : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStickyFlameSignature, AStickyFlame*, StickyFlame);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStickyFlameSignature OnStickyFlameSpawned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStickyFlame> StickyFlameActor;
    
    UPROPERTY(EditAnywhere)
    float FlameLifetime;
    
    UPROPERTY(EditAnywhere)
    float StickyFlameIntervals;
    
    UPROPERTY(EditAnywhere)
    float StickyMaxSpawnPerSecond;
    
    UPROPERTY(EditAnywhere)
    float StickyFlameMinDistance;
    
    UPROPERTY(EditAnywhere, Transient)
    float StickyFlameLastTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector StickyFlameLastLocation;
    
public:
    UStickyFlameSpawner();
    UFUNCTION(BlueprintCallable)
    bool TrySpawnStickyFlameHit(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    bool TrySpawnStickyFlame(FVector Location, FVector Normal);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnStickyFlame(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal);
    
};

