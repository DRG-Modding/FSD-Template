#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlareMeta.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFlareMeta {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float Inhibit;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float InvRadius;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector Pos;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool Moving;
    
    FSD_API FFlareMeta();
};

