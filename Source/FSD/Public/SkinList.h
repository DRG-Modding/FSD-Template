#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkinList.generated.h"

USTRUCT(BlueprintType)
struct FSkinList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> Skins;
    
    FSD_API FSkinList();
};

