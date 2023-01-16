#pragma once
#include "CoreMinimal.h"
#include "ECaveEntranceType.h"
#include "GenerationItem.h"
#include "CaveEntrance.generated.h"

class UCaveEntranceComponent;

UCLASS(Blueprintable, CollapseCategories)
class ACaveEntrance : public AGenerationItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCaveEntranceComponent* CaveEntranceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECaveEntranceType EntranceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasBeenConverted;
    
public:
    ACaveEntrance();
};

