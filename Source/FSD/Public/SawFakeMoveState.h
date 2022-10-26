#pragma once
#include "CoreMinimal.h"
#include "FakeMoveState.h"
#include "SawFakeMoveState.generated.h"

USTRUCT(BlueprintType)
struct FSawFakeMoveState : public FFakeMoveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GravityTimer;
    
    FSD_API FSawFakeMoveState();
};

