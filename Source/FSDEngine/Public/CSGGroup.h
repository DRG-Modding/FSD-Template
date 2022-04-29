#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "CSGGroup.generated.h"

UCLASS(Blueprintable)
class UCSGGroup : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCSGBase*> Children;
    
    UCSGGroup();
};

