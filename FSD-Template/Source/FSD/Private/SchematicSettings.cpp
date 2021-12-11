#include "SchematicSettings.h"

class USchematic;

FSchematicType USchematicSettings::GetSchematicTypeData(ESchematicType InType) {
    return FSchematicType{};
}

TSet<USchematic*> USchematicSettings::GetSchematics() const {
    return TSet<USchematic*>();
}

USchematicSettings::USchematicSettings() {
    this->PricingTable = NULL;
    this->BlankSchematic = NULL;
    this->EndlessSchematics = NULL;
    this->OverclockPricingTier = NULL;
}

