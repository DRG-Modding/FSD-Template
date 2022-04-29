#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "NoMovementStateComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNoMovementStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableHeadLightOnEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableHeadLightOnExit;
    
    UNoMovementStateComponent();
};

