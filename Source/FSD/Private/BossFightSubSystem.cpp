#include "BossFightSubSystem.h"

class UBossFightInterface;
class IBossFightInterface;
class AActor;

void UBossFightSubSystem::RegisterBossFight(TScriptInterface<IBossFightInterface> BossFight) {
}

void UBossFightSubSystem::DeregisterBossFight(AActor* boss) {
}

UBossFightSubSystem::UBossFightSubSystem() {
}

