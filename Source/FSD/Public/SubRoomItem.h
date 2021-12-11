#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "SubRoomItem.generated.h"

class URoomGenerator;

UCLASS()
class ASubRoomItem : public AGenerationItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    URoomGenerator* RoomGenerator;
    
    UPROPERTY(EditAnywhere)
    int32 Layer;
    
public:
    ASubRoomItem();
};

