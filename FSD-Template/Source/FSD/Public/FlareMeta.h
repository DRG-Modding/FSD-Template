#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlareMeta.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFlareMeta {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(Transient)
    float Inhibit;
    
    UPROPERTY(Transient)
    float Radius;
    
    UPROPERTY(Transient)
    float InvRadius;
    
    UPROPERTY(Transient)
    FVector Pos;
    
    UPROPERTY(Transient)
    bool Moving;
    
    FSD_API FFlareMeta();
};

