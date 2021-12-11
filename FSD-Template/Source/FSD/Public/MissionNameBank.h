#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "MissionNameBank.generated.h"

UCLASS(BlueprintType)
class UMissionNameBank : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FText> FirstNames;
    
    UPROPERTY(EditAnywhere)
    TArray<FText> LastNames;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetRandomGeneratedNames(UPARAM(Ref) FRandomStream& Random, int32 count) const;
    
    UMissionNameBank();
};

