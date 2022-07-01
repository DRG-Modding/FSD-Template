#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameActivitySubTask.h"
#include "EActivityType.h"
#include "GameActivityType.generated.h"

UCLASS(Blueprintable)
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

