#pragma once
#include "CoreMinimal.h"
#include "FormationData.h"
#include "GroundFormationData.generated.h"

UCLASS(Blueprintable)
class UGroundFormationData : public UFormationData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FormationSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FormationSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSpread;
    
public:
    UGroundFormationData();
};

