#pragma once
#include "CoreMinimal.h"
#include "GunTowerModuleAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "RandomFireModuleAnimInstance.generated.h"

UCLASS(NonTransient)
class URandomFireModuleAnimInstance : public UGunTowerModuleAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator OtherLookatRotation;
    
    URandomFireModuleAnimInstance();
};

