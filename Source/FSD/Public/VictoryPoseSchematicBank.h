#pragma once
#include "CoreMinimal.h"
#include "SchematicBankBase.h"
#include "SchematicBankItem.h"
#include "VictoryPoseSchematicBank.generated.h"

class USchematicCategory;
class UVictoryPose;

UCLASS()
class FSD_API UVictoryPoseSchematicBank : public USchematicBankBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USchematicCategory* SchematicCategory;
    
    UPROPERTY(EditAnywhere)
    TMap<UVictoryPose*, FSchematicBankItem> VictoryPoses;
    
    UVictoryPoseSchematicBank();
};

