#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "RefineryExtractorPodAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class URefineryExtractorPodAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPumping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReturning;
    
public:
    URefineryExtractorPodAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturningChanged();
    
};

