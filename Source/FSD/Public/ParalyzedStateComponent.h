#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "ParalyzedStateComponent.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UParalyzedStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> CaveLeechClass;
    
    UPROPERTY(EditAnywhere)
    float CameraArmHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float CameraArmSpeed;
    
public:
    UParalyzedStateComponent();
};

