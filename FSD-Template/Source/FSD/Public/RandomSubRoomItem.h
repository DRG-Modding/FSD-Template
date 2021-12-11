#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "GameplayTagContainer.h"
#include "RandomSubRoomItem.generated.h"

class URoomGeneratorGroup;

UCLASS()
class ARandomSubRoomItem : public AGenerationItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    URoomGeneratorGroup* RoomGroup;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery tagQuery;
    
    UPROPERTY(EditAnywhere)
    int32 Layer;
    
public:
    ARandomSubRoomItem();
};

