#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
#include "ECaveEntrancePriority.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECaveEntranceType.h"
#include "EntranceFeature.generated.h"

UCLASS(EditInlineNew)
class UEntranceFeature : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(VisibleAnywhere)
    FRotator Direction;
    
    UPROPERTY(VisibleAnywhere)
    ECaveEntranceType EntranceType;
    
    UPROPERTY(VisibleAnywhere)
    ECaveEntrancePriority Priority;
    
public:
    UEntranceFeature();
};

