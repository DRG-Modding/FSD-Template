#pragma once
#include "CoreMinimal.h"
#include "RoomGeneratorGroupInstance.generated.h"

class URoomGenerator;

USTRUCT(BlueprintType)
struct FRoomGeneratorGroupInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<URoomGenerator*> Rooms;
    
    FSD_API FRoomGeneratorGroupInstance();
};

