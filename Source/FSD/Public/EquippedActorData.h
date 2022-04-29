#pragma once
#include "CoreMinimal.h"
#include "EquippedActorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FEquippedActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 IsExternalActor: 1;
    
    FSD_API FEquippedActorData();
};

