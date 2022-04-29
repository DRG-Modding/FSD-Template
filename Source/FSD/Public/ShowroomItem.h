#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShowroomItem.generated.h"

class AShowroomStage;

UCLASS(Abstract, Blueprintable)
class AShowroomItem : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AShowroomStage> ShowroomStage;
    
    AShowroomItem();
};

