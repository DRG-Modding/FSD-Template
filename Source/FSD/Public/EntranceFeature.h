#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RoomFeature.h"
#include "UObject/NoExportTypes.h"
#include "ECaveEntrancePriority.h"
#include "ECaveEntranceType.h"
#include "EntranceFeature.generated.h"

UCLASS(EditInlineNew)
class UEntranceFeature : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Direction;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ECaveEntranceType EntranceType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ECaveEntrancePriority Priority;
    
public:
    UEntranceFeature();
};

