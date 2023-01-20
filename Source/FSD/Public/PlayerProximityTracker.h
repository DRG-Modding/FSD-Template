#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PlayerProximityDelegateDelegate.h"
#include "PlayerSphere.h"
#include "ProximityTriggerItem.h"
#include "PlayerProximityTracker.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerProximityTracker : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceBetweenPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerSpheresUpdateRatePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlayerSphere> PlayerSpheres;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FProximityTriggerItem> LocalPlayerProximityTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FProximityTriggerItem> AnyPlayerProximityTriggers;
    
public:
    UPlayerProximityTracker();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Receive_RegisterForLocalPlayerProximity(UObject* WorldContextObject, const FVector& Location, float Distance, const FPlayerProximityDelegate& proximityCallback, bool triggerOnlyOnce);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Receive_RegisterForAnyPlayerProximity(UObject* WorldContextObject, const FVector& Location, float Distance, const FPlayerProximityDelegate& proximityCallback, bool triggerOnlyOnce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerSphere GetPrimarySphere() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPlayerSphere> GetPlayerSpheres() const;
    
};

