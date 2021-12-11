#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SubRoomFeature.generated.h"

class URoomGenerator;

UCLASS(EditInlineNew)
class USubRoomFeature : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    URoomGenerator* RoomGenerator;
    
    UPROPERTY(VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(VisibleAnywhere)
    FRotator Rotation;
    
    UPROPERTY(VisibleAnywhere)
    float Scale;
    
public:
    USubRoomFeature();
};

