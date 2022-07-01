#include "AIFunctionLibrary.h"

class UObject;
class APawn;
class AActor;
class APlayerCharacter;
class UAttackerPositioningComponent;

void UAIFunctionLibrary::SetAICanSense(bool canSense) {
}

int32 UAIFunctionLibrary::MakeEnemiesFleeFromArea(UObject* WorldContextObject, const FVector& Center, float Radius, int32 maxEnemiesAffected) {
    return 0;
}

void UAIFunctionLibrary::MakeEnemiesBackOutOfArea(UObject* WorldContextObject, const FVector& Center, float Radius) {
}

bool UAIFunctionLibrary::IsEnemyAlertet(APawn* enemy) {
    return false;
}

APlayerCharacter* UAIFunctionLibrary::GetPlayerTarget(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying) {
    return NULL;
}

bool UAIFunctionLibrary::GetAttackableTargetsInRange(AActor* From, TArray<UAttackerPositioningComponent*>& outArray, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying) {
    return false;
}

UAttackerPositioningComponent* UAIFunctionLibrary::GetAttackableTarget(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying) {
    return NULL;
}

APlayerCharacter* UAIFunctionLibrary::ConsiderChangingTarget(APlayerCharacter* CurrentTarget, AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool CurrentTargetMustBeAlive, bool IsFlying) {
    return NULL;
}

void UAIFunctionLibrary::AlertEnemy(APawn* enemy) {
}

void UAIFunctionLibrary::AlertEnemiesInRange(UObject* WorldContextObject, FVector Origin, float range, APawn* alerter) {
}

UAIFunctionLibrary::UAIFunctionLibrary() {
}

