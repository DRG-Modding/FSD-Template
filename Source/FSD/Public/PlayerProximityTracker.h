#pragma once
#include "CoreMinimal.h"
#include "PlayerSphere.h"
#include "Components/ActorComponent.h"
#include "ProximityTriggerItem.h"
#include "UObject/NoExportTypes.h"
#include "PlayerProximityTracker.generated.h"

class UObject;
class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FPlayerProximityTrackerProximityCallback, APlayerCharacter*, Player, bool, enteredTrigger);

UCLASS(BlueprintType)
class UPlayerProximityTracker : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxDistanceBetweenPlayers;
    
    UPROPERTY(EditAnywhere)
    float PlayerSpheresUpdateRatePerSecond;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FPlayerSphere> PlayerSpheres;
    
    UPROPERTY(Transient)
    TArray<FProximityTriggerItem> LocalPlayerProximityTriggers;
    
    UPROPERTY(Transient)
    TArray<FProximityTriggerItem> AnyPlayerProximityTriggers;
    
public:
    UFUNCTION(BlueprintCallable)
    static void Receive_RegisterForLocalPlayerProximity(UObject* WorldContextObject, const FVector& Location, float Distance, const FPlayerProximityTrackerProximityCallback& proximityCallback, bool triggerOnlyOnce);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void Receive_RegisterForAnyPlayerProximity(UObject* WorldContextObject, const FVector& Location, float Distance, const FPlayerProximityTrackerProximityCallback& proximityCallback, bool triggerOnlyOnce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerSphere GetPrimarySphere() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPlayerSphere> GetPlayerSpheres() const;
    
    UPlayerProximityTracker();
};

