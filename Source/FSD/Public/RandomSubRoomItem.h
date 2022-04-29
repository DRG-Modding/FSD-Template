#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "GameplayTagContainer.h"
#include "RandomSubRoomItem.generated.h"

class URoomGeneratorGroup;

UCLASS(Blueprintable)
class ARandomSubRoomItem : public AGenerationItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URoomGeneratorGroup* RoomGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery tagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Layer;
    
public:
    ARandomSubRoomItem();
};

