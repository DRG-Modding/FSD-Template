#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PrePlacedEncounterItem.generated.h"

class AEncounterActor;
class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FPrePlacedEncounterItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* descriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEncounterActor* EncounterActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RoomID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsRoomID;
    
    FSD_API FPrePlacedEncounterItem();
};

