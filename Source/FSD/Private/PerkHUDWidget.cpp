#include "PerkHUDWidget.h"

UPerkHUDWidget::UPerkHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PerkAsset = NULL;
}

void UPerkHUDWidget::SetPerkAsset(UPerkAsset* InPerk) {
}


AFSDPlayerState* UPerkHUDWidget::GetFSDPlayerState() const {
    return NULL;
}

APlayerCharacter* UPerkHUDWidget::GetCharacter() const {
    return NULL;
}


