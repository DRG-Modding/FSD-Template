#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ShowroomSettings.generated.h"

class AShowroomStage;
class UCharacterShowroomController;
class UEnemyShowroomController;

UCLASS(Blueprintable)
class UShowroomSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEnemyShowroomController> EnemyShowroomController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCharacterShowroomController> CharacterShowroomController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AShowroomStage> CharacterStage;
    
    UShowroomSettings();
};

