#include "BossFightSubSystem.h"

class AActor;
class IBossFightInterface;
class UBossFightInterface;
class UUserWidget;

void UBossFightSubSystem::RemoveCustomBossFightWidget(UUserWidget* InWidget) {
}

void UBossFightSubSystem::RegisterBossFight(TScriptInterface<IBossFightInterface> BossFight) {
}

void UBossFightSubSystem::DeregisterBossFight(AActor* boss) {
}

void UBossFightSubSystem::AddCustomBossFightWidget(UUserWidget* InWidget) {
}

UBossFightSubSystem::UBossFightSubSystem() {
}

