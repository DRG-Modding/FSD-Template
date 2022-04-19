#pragma once
#include "CoreMinimal.h"
#include "SchematicEventDelegate.generated.h"

class USchematic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSchematicEvent, USchematic*, Schematic);

