#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NetMontageAble.generated.h"

class USkeletalMeshComponent;
class UAnimMontage;
class UAnimInstance;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UNetMontageAble : public UInterface {
    GENERATED_BODY()
};

class INetMontageAble : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual float QueueMontage(UAnimMontage* Montage) PURE_VIRTUAL(QueueMontage, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual USkeletalMeshComponent* GetSkeletalMesh() const PURE_VIRTUAL(GetSkeletalMesh, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual UAnimInstance* GetAnimInstance() const PURE_VIRTUAL(GetAnimInstance, return NULL;);
    
};

