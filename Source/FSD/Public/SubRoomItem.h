#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "SubRoomItem.generated.h"

class URoomGenerator;

UCLASS(Blueprintable)
class ASubRoomItem : public AGenerationItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URoomGenerator* RoomGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Layer;
    
public:
    ASubRoomItem();
};

