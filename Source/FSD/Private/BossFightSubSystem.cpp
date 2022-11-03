#include "BossFightSubSystem.h"

class UUserWidget;
class AActor;
class UBossFightInterface;
class IBossFightInterface;

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

