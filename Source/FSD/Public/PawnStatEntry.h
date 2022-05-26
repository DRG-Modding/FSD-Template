#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PawnStatEntry.generated.h"

class UPawnStat;

USTRUCT(BlueprintType)
struct FPawnStatEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPawnStat* PawnStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Value;
    
    FSD_API FPawnStatEntry();
};

