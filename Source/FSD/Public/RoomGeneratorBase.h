#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERoomMirroringSupport.h"
#include "GameplayTagContainer.h"
#include "RoomGeneratorBase.generated.h"

UCLASS(Abstract, BlueprintType)
class URoomGeneratorBase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float Bounds;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool CanOnlyBeUsedOnce;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ERoomMirroringSupport MirrorSupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RoomTags;
    
    URoomGeneratorBase();
};

