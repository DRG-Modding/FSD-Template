#pragma once
#include "CoreMinimal.h"
#include "ECaveEntranceType.h"
#include "Components/PrimitiveComponent.h"
#include "ECaveEntrancePriority.h"
#include "CaveEntranceComponent.generated.h"

UCLASS()
class UCaveEntranceComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECaveEntranceType Direction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECaveEntrancePriority Priority;
    
public:
    UCaveEntranceComponent();
};

