#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "StickyFlameSpawner.generated.h"

class AStickyFlame;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UStickyFlameSpawner : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStickyFlameSignature, AStickyFlame*, StickyFlame);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStickyFlameSignature OnStickyFlameSpawned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStickyFlame> StickyFlameActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlameLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickyFlameIntervals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickyFlameMinDistance;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float StickyFlameLastTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
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

