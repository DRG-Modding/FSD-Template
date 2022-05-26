#pragma once
#include "CoreMinimal.h"
#include "CSGSTLProperties.h"
#include "SimpleMeshWithCachedTree.h"
#include "CSGSTL.generated.h"

UCLASS(Blueprintable)
class UCSGSTL : public USimpleMeshWithCachedTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGSTLProperties Properties;
    
    UCSGSTL();
};

