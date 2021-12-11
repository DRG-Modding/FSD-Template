#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BakeSettings.h"
#include "CSGChildInstanceProperties.generated.h"

class ACSGBuilder;

USTRUCT(BlueprintType)
struct FCSGChildInstanceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ACSGBuilder> Mesh;
    
    UPROPERTY(EditAnywhere)
    FBakeSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Seed;
    
    FSDENGINE_API FCSGChildInstanceProperties();
};

