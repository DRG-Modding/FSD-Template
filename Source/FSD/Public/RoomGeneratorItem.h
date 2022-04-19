#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RoomGeneratorItem.generated.h"

class URoomGeneratorBase;

USTRUCT()
struct FRoomGeneratorItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    URoomGeneratorBase* RoomGenerator;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    float Rotation;
    
    FSD_API FRoomGeneratorItem();
};

