#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ResourcesSave.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FResourcesSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, float> OwnedResources;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, float> Resources;
    
public:
    FSD_API FResourcesSave();
};

