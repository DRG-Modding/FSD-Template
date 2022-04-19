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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACSGBuilder> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBakeSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    FSDENGINE_API FCSGChildInstanceProperties();
};

