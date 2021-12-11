#pragma once
#include "CoreMinimal.h"
#include "SimpleMeshWithCachedTree.h"
#include "CSGSTLProperties.h"
#include "CSGSTL.generated.h"

UCLASS()
class UCSGSTL : public USimpleMeshWithCachedTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGSTLProperties Properties;
    
    UCSGSTL();
};

