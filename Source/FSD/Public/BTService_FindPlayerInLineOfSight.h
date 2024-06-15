#pragma once
#include "CoreMinimal.h"
#include "BTService_FindPlayer.h"
#include "BTService_FindPlayerInLineOfSight.generated.h"

UCLASS(Blueprintable)
class UBTService_FindPlayerInLineOfSight : public UBTService_FindPlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TraceSocketName;
    
public:
    UBTService_FindPlayerInLineOfSight();

};

