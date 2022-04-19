#pragma once
#include "CoreMinimal.h"
#include "SchematicItem.h"
#include "VictoryPoseSchematicItem.generated.h"

class UVictoryPose;

UCLASS(EditInlineNew)
class UVictoryPoseSchematicItem : public USchematicItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVictoryPose* VictoryPose;
    
public:
    UVictoryPoseSchematicItem();
};

