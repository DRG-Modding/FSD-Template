#include "BossFightSubSystem.h"

class AActor;
class UBossFightInterface;
class IBossFightInterface;

void UBossFightSubSystem::RegisterBossFight(TScriptInterface<IBossFightInterface> BossFight) {
}

void UBossFightSubSystem::DeregisterBossFight(AActor* boss) {
}

UBossFightSubSystem::UBossFightSubSystem() {
}

