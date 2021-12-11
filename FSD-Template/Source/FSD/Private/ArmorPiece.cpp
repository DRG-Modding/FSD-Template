#include "ArmorPiece.h"
#include "Templates/SubclassOf.h"

class AArmorPiece;
class AActor;

TSubclassOf<AActor> AArmorPiece::GetWeaponViewClass() const {
    return NULL;
}

AArmorPiece* AArmorPiece::GetArmorPieceDefaultObject(TSubclassOf<AArmorPiece> armorPieceClass) {
    return NULL;
}

AArmorPiece::AArmorPiece() {
    this->LoadoutProxy = NULL;
    this->ItemID = NULL;
    this->WeaponPreviewClass = NULL;
}

