#include "LookingAtWidget.h"

class AActor;
class UHealthComponentBase;
class UHealth;
class IHealth;

void ULookingAtWidget::SetCurrentTarget(AActor* NewActor, const TScriptInterface<IHealth>& HealthComponent, float OverrideTargetLostTime) {
}

void ULookingAtWidget::ResetCurrentTarget() {
}




bool ULookingAtWidget::IsValidTarget_Implementation(AActor* TargetActor, const TScriptInterface<IHealth>& TargetHealth) const {
    return false;
}

bool ULookingAtWidget::IsBossFight(const TScriptInterface<IHealth>& Health) const {
    return false;
}

UHealthComponentBase* ULookingAtWidget::GetLookingAtHealth() const {
    return NULL;
}

AActor* ULookingAtWidget::GetLookingAtActor() const {
    return NULL;
}

bool ULookingAtWidget::GetCharacterTemperatureEffect(float& TemperatureEffect) const {
    return false;
}

ULookingAtWidget::ULookingAtWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TargetSelectDuration = 1.00f;
    this->TargetLostDuration = 2.00f;
    this->CanCurrentTargetTakeDamage = true;
    this->TargetLostTime = 0.00f;
    this->bTargetSet = false;
}

