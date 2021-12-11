#pragma once
#include "CoreMinimal.h"
#include "ShowroomItem.h"
#include "EShowroomScaling.h"
#include "EnemyShowroomItem.generated.h"

UCLASS()
class AEnemyShowroomItem : public AShowroomItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EShowroomScaling Scaling;
    
public:
    AEnemyShowroomItem();
};

