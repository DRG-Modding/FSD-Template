#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "RandomSubRoomFeature.generated.h"

class URoomGeneratorGroup;

UCLASS(EditInlineNew)
class URandomSubRoomFeature : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    URoomGeneratorGroup* RoomGroup;
    
    UPROPERTY(VisibleAnywhere)
    FGameplayTagQuery tagQuery;
    
    UPROPERTY(VisibleAnywhere)
    int32 Layer;
    
    UPROPERTY(VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(VisibleAnywhere)
    FRotator Rotation;
    
    UPROPERTY(VisibleAnywhere)
    float Scale;
    
public:
    URandomSubRoomFeature();
};

