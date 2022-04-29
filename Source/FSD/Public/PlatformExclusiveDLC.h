#pragma once
#include "CoreMinimal.h"
#include "DLCBase.h"
#include "EFSDTargetPlatform.h"
#include "PlatformExclusiveDLC.generated.h"

UCLASS(Blueprintable)
class UPlatformExclusiveDLC : public UDLCBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDTargetPlatform Platform;
    
    UPlatformExclusiveDLC();
};

