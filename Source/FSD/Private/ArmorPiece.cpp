#include "ArmorPiece.h"
#include "Templates/SubclassOf.h"
#include "UpgradableGearComponent.h"

class AActor;
class AArmorPiece;

TSubclassOf<AActor> AArmorPiece::GetWeaponViewClass() const {
    return NULL;
}

AArmorPiece* AArmorPiece::GetArmorPieceDefaultObject(TSubclassOf<AArmorPiece> armorPieceClass) {
    return NULL;
}

AArmorPiece::AArmorPiece() {
    this->Upgradable = CreateDefaultSubobject<UUpgradableGearComponent>(TEXT("Upgradable"));
    this->LoadoutProxy = NULL;
    this->ItemID = NULL;
    this->WeaponPreviewClass = NULL;
}

