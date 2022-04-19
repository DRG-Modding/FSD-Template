#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Rotator_NoQuantize.h"
#include "UObject/NoExportTypes.h"
#include "RoomItem.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRoomItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Spawnable;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FRotator_NoQuantize Rotation;
    
    FSD_API FRoomItem();
};

