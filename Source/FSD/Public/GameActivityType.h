#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EActivityType.h"
#include "GameActivitySubTask.h"
#include "GameActivityType.generated.h"

UCLASS()
class UGameActivityType : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivityType ActivityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameActivitySubTask> SubTasks;
    
    UGameActivityType();
};

