#include "PerkLogic.h"

UPerkLogic::UPerkLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


APlayerCharacter* UPerkLogic::GetCharacter() const {
    return NULL;
}

FText UPerkLogic::GetAdditionalText_Implementation(int32 Rank) const {
    return FText::GetEmpty();
}


