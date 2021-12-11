#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkinList.generated.h"

USTRUCT(BlueprintType)
struct FSkinList {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<FGuid> Skins;
    
    FSD_API FSkinList();
};

