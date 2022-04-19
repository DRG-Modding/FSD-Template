#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "ECaveEntranceType.h"
#include "CaveEntrance.generated.h"

class UCaveEntranceComponent;

UCLASS(CollapseCategories)
class ACaveEntrance : public AGenerationItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCaveEntranceComponent* CaveEntranceComponent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ECaveEntranceType EntranceType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool HasBeenConverted;
    
public:
    ACaveEntrance();
};

