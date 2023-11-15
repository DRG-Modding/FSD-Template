#include "ArmorPiece.h"
#include "Templates/SubclassOf.h"
#include "UpgradableGearComponent.h"

AArmorPiece::AArmorPiece(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Upgradable = CreateDefaultSubobject<UUpgradableGearComponent>(TEXT("Upgradable"));
    this->LoadoutProxy = NULL;
    this->ItemID = NULL;
    this->WeaponPreviewClass = NULL;
}

TSubclassOf<AActor> AArmorPiece::GetWeaponViewClass() const {
    return NULL;
}

AArmorPiece* AArmorPiece::GetArmorPieceDefaultObject(TSubclassOf<AArmorPiece> armorPieceClass) {
    return NULL;
}


