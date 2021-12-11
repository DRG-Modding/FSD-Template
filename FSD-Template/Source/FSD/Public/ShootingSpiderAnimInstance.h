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
    UPROPERTY(BlueprintReadOnly, Transient)
    float LookAtBlend;
    
    UPROPERTY(EditAnywhere)
    bool CheckCurve;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector LookAtLocation;
    
public:
    UShootingSpiderAnimInstance();
};

