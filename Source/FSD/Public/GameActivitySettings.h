#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameActivitySettings.generated.h"

class UGameActivityType;

UCLASS()
class UGameActivitySettings : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGameActivityType>> GameActivites;
    
public:
    UGameActivitySettings();
};

