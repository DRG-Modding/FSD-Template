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
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Bounds;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool CanOnlyBeUsedOnce;
    
    UPROPERTY(VisibleAnywhere)
    ERoomMirroringSupport MirrorSupport;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RoomTags;
    
    URoomGeneratorBase();
};

