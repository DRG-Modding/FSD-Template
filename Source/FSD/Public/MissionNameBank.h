#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "MissionNameBank.generated.h"

UCLASS(Blueprintable)
class UMissionNameBank : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> FirstNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> LastNames;
    
public:
    UMissionNameBank();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetRandomGeneratedNames(UPARAM(Ref) FRandomStream& Random, int32 count) const;
    
};

