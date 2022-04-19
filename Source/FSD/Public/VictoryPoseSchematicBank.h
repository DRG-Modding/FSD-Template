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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicCategory* SchematicCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UVictoryPose*, FSchematicBankItem> VictoryPoses;
    
    UVictoryPoseSchematicBank();
};

