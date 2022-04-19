#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
#include "UObject/NoExportTypes.h"
#include "ResourceFeature.generated.h"

class UResourceData;

UCLASS(EditInlineNew)
class UResourceFeature : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAmount;
    
public:
    UResourceFeature();
};

