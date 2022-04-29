#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScanPath.generated.h"

USTRUCT(BlueprintType)
struct FScanPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector End;
    
    FSD_API FScanPath();
};

