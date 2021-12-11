#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShowroomItem.generated.h"

class AShowroomStage;

UCLASS(Abstract)
class AShowroomItem : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AShowroomStage> ShowroomStage;
    
    AShowroomItem();
};

