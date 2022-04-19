#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "RoomDecorationObject.generated.h"

class UDebrisPositioning;
class AActor;

UCLASS()
class URoomDecorationObject : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Positioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Actor;
    
public:
    URoomDecorationObject();
};

