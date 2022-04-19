#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RoomFeature.h"
#include "UObject/NoExportTypes.h"
#include "DropPodCalldownLocationFeature.generated.h"

class AActor;

UCLASS(EditInlineNew)
class UDropPodCalldownLocationFeature : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CalldownClass;
    
public:
    UDropPodCalldownLocationFeature();
};

