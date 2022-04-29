#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GemResourceCreator.generated.h"

class UGemResourceData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UGemResourceCreator : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGemResourceData* ResourceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckIfFreeSpaceAbove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SearchSize;
    
public:
    UGemResourceCreator();
};

