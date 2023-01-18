#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "ERivalBombNodeState.h"
#include "RivalBombNodeAniminstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class URivalBombNodeAniminstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StartOffset;
    
public:
    URivalBombNodeAniminstance();
    UFUNCTION(BlueprintCallable)
    void SetRivalBombNodeState(ERivalBombNodeState NewState);
    
};

