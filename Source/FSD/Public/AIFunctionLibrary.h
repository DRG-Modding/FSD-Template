#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "AIFunctionLibrary.generated.h"

class APlayerCharacter;
class UObject;
class APawn;
class AActor;
class UAttackerPositioningComponent;

UCLASS(Blueprintable)
class UAIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIFunctionLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetAICanSense(bool canSense);
    
    UFUNCTION(BlueprintCallable)
    static int32 MakeEnemiesFleeFromArea(UObject* WorldContextObject, const FVector& Center, float Radius, int32 maxEnemiesAffected);
    
    UFUNCTION(BlueprintCallable)
    static void MakeEnemiesBackOutOfArea(UObject* WorldContextObject, const FVector& Center, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnemyAlertet(APawn* enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerCharacter* GetPlayerTarget(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAttackableTargetsInRange(AActor* From, TArray<UAttackerPositioningComponent*>& outArray, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAttackerPositioningComponent* GetAttackableTarget(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerCharacter* ConsiderChangingTarget(APlayerCharacter* CurrentTarget, AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool CurrentTargetMustBeAlive, bool IsFlying);
    
    UFUNCTION(BlueprintCallable)
    static void AlertEnemy(APawn* enemy);
    
    UFUNCTION(BlueprintCallable)
    static void AlertEnemiesInRange(UObject* WorldContextObject, FVector Origin, float range, APawn* alerter);
    
};

