#include "PerkLogic.h"

class APlayerCharacter;


APlayerCharacter* UPerkLogic::GetCharacter() const {
    return NULL;
}

FText UPerkLogic::GetAdditionalText_Implementation(int32 Rank) const {
    return FText::GetEmpty();
}

UPerkLogic::UPerkLogic() {
}

