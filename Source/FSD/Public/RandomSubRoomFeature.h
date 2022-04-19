#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RoomFeature.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "RandomSubRoomFeature.generated.h"

class URoomGeneratorGroup;

UCLASS(EditInlineNew)
class URandomSubRoomFeature : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    URoomGeneratorGroup* RoomGroup;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery tagQuery;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 Layer;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
public:
    URandomSubRoomFeature();
};

