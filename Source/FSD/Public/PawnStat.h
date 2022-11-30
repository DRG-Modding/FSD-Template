#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPawnStatType.h"
#include "PawnStat.generated.h"

UCLASS(Blueprintable)
class UPawnStat : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnStatType PawnStatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnStatType ValueModificationType;
    
public:
    UPawnStat();
};

