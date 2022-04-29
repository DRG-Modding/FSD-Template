#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "CSGDuplicateSingleChildBase.generated.h"

UCLASS(Blueprintable)
class UCSGDuplicateSingleChildBase : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCSGBase*> Children;
    
    UCSGDuplicateSingleChildBase();
};

