#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EResourceFilterType.h"
#include "ResourceFilter.generated.h"

class UResourceData;

UCLASS(Blueprintable)
class UResourceFilter : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UResourceData*> Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EResourceFilterType> FilterType;
    
public:
    UResourceFilter();

};

