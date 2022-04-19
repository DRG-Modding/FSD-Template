#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RoomFeature.generated.h"

class URoomFeature;

UCLASS(DefaultToInstanced, EditInlineNew)
class URoomFeature : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URoomFeature*> RoomFeatures;
    
public:
    URoomFeature();
};

