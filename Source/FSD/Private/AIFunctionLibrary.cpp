#include "AIFunctionLibrary.h"

UAIFunctionLibrary::UAIFunctionLibrary() {
}

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

APlayerCharacter* UAIFunctionLibrary::GetPlayerTarget(AActor* from, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying) {
    return NULL;
}

bool UAIFunctionLibrary::GetAttackableTargetsInRange(AActor* from, TArray<UAttackerPositioningComponent*>& outArray, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying) {
    return false;
}

UAttackerPositioningComponent* UAIFunctionLibrary::GetAttackableTarget(AActor* from, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying) {
    return NULL;
}

APlayerCharacter* UAIFunctionLibrary::ConsiderChangingTarget_WithLineOfSight(APlayerCharacter* CurrentTarget, AActor* from, float MaxDistance, FName TraceSocketName, bool MustBeAlive, bool MustBeUnparalyzed, bool CurrentTargetMustBeAlive, bool IsFlying) {
    return NULL;
}

APlayerCharacter* UAIFunctionLibrary::ConsiderChangingTarget(APlayerCharacter* CurrentTarget, AActor* from, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool CurrentTargetMustBeAlive, bool IsFlying) {
    return NULL;
}

void UAIFunctionLibrary::AlertEnemy(APawn* enemy) {
}

void UAIFunctionLibrary::AlertEnemiesInRange(UObject* WorldContextObject, FVector Origin, float range, APawn* alerter) {
}


