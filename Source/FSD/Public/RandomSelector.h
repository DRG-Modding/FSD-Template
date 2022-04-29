#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
#include "RandomSelector.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class URandomSelector : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
public:
    URandomSelector();
};

