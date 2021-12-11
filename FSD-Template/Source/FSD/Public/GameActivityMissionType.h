#pragma once
#include "CoreMinimal.h"
#include "GameActivityType.h"
#include "GameActivityMissionType.generated.h"

class UMissionTemplate;

UCLASS()
class UGameActivityMissionType : public UGameActivityType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMissionTemplate> ActivityMission;
    
    UGameActivityMissionType();
};

