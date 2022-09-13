#include "PerkHUDWidget.h"

class UPerkAsset;
class APlayerCharacter;
class AFSDPlayerState;

void UPerkHUDWidget::SetPerkAsset(UPerkAsset* InPerk) {
}


AFSDPlayerState* UPerkHUDWidget::GetFSDPlayerState() const {
    return NULL;
}

APlayerCharacter* UPerkHUDWidget::GetCharacter() const {
    return NULL;
}

UPerkHUDWidget::UPerkHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PerkAsset = NULL;
}

