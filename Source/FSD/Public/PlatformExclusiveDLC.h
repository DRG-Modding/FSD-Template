#pragma once
#include "CoreMinimal.h"
#include "EFSDTargetPlatform.h"
#include "DLCBase.h"
#include "PlatformExclusiveDLC.generated.h"

UCLASS(Blueprintable)
class UPlatformExclusiveDLC : public UDLCBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDTargetPlatform Platform;
    
    UPlatformExclusiveDLC();
};

