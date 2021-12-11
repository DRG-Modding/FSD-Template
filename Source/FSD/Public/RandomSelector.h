#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
#include "RandomSelector.generated.h"

UCLASS(EditInlineNew)
class URandomSelector : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    int32 Min;
    
    UPROPERTY(VisibleAnywhere)
    int32 Max;
    
public:
    URandomSelector();
};

