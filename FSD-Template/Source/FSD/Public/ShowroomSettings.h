#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ShowroomSettings.generated.h"

class UCharacterShowroomController;
class AShowroomStage;
class UEnemyShowroomController;

UCLASS()
class UShowroomSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UEnemyShowroomController> EnemyShowroomController;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UCharacterShowroomController> CharacterShowroomController;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AShowroomStage> CharacterStage;
    
    UShowroomSettings();
};

