#pragma once
#include "CoreMinimal.h"
#include "SpecialEventSpawner.h"
#include "SimpleSpecialEventSpawner.generated.h"

class UDebrisPositioning;
class AActor;

UCLASS(EditInlineNew)
class USimpleSpecialEventSpawner : public USpecialEventSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Positioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> EventActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventAvoidanceRadius;
    
public:
    USimpleSpecialEventSpawner();
};

