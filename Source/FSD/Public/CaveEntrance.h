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
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCaveEntranceComponent* CaveEntranceComponent;
    
    UPROPERTY()
    ECaveEntranceType EntranceType;
    
    UPROPERTY()
    bool HasBeenConverted;
    
public:
    ACaveEntrance();
};

