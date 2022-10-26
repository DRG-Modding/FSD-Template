#include "SchematicSettings.h"

class USchematic;
class UItemID;
class UOverclockBank;

bool USchematicSettings::ValidateVanitySchematics() const {
    return false;
}

FSchematicType USchematicSettings::GetSchematicTypeData(ESchematicType InType) {
    return FSchematicType{};
}

TSet<USchematic*> USchematicSettings::GetSchematics() const {
    return TSet<USchematic*>();
}

UOverclockBank* USchematicSettings::GetOverclocksForItem(UItemID* Item) const {
    return NULL;
}

USchematicSettings::USchematicSettings() {
    this->PricingTable = NULL;
    this->BlankSchematic = NULL;
    this->EndlessSchematics = NULL;
    this->OverclockPricingTier = NULL;
    this->VanityCatHeadWear = NULL;
    this->VanityCatMoustache = NULL;
    this->VanityCatBeard = NULL;
    this->VanityCatArmor = NULL;
    this->VanityCatEyebrow = NULL;
    this->VanityCatHairColor = NULL;
    this->VanityCatSideburn = NULL;
    this->VanityCatSkinColor = NULL;
    this->VanityCatVictoryPose = NULL;
    this->WeaponPaintJob = NULL;
    this->SchematicGATable = NULL;
}

