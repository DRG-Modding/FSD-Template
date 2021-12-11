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
    UPROPERTY(VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<AActor> CalldownClass;
    
public:
    UDropPodCalldownLocationFeature();
};

