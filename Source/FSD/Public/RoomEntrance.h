#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECaveEntrancePriority.h"
#include "ECaveEntranceType.h"
#include "RoomEntrance.generated.h"

USTRUCT(BlueprintType)
struct FRoomEntrance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBLocked;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ECaveEntranceType EntranceType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ECaveEntrancePriority Priority;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 PathObstacleID;
    
    FSD_API FRoomEntrance();
};

