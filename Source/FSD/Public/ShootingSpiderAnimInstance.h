#pragma once
#include "CoreMinimal.h"
#include "SpiderAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "ShootingSpiderAnimInstance.generated.h"

class AActor;

UCLASS(NonTransient)
class UShootingSpiderAnimInstance : public USpiderAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float LookAtBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckCurve;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LookAtLocation;
    
public:
    UShootingSpiderAnimInstance();
};

