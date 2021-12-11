#pragma once
#include "CoreMinimal.h"
#include "EFSDTargetPlatform.h"
#include "DLCBase.h"
#include "PlatformExclusiveDLC.generated.h"

UCLASS()
class UPlatformExclusiveDLC : public UDLCBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EFSDTargetPlatform Platform;
    
    UPlatformExclusiveDLC();
};

