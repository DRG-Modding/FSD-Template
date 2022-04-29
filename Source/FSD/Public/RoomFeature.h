#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RoomFeature.generated.h"

class URoomFeature;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class URoomFeature : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<URoomFeature*> RoomFeatures;
    
public:
    URoomFeature();
};

