#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECaveEntranceType.h"
#include "ECaveEntrancePriority.h"
#include "RoomEntrance.generated.h"

USTRUCT(BlueprintType)
struct FRoomEntrance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECaveEntranceType EntranceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECaveEntrancePriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PathObstacleID;
    
    FSD_API FRoomEntrance();
};

