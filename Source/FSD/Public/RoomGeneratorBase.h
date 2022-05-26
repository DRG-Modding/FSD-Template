#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERoomMirroringSupport.h"
#include "GameplayTagContainer.h"
#include "RoomGeneratorBase.generated.h"

UCLASS(Abstract, Blueprintable)
class URoomGeneratorBase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanOnlyBeUsedOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERoomMirroringSupport MirrorSupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RoomTags;
    
    URoomGeneratorBase();
};

