#pragma once
#include "CoreMinimal.h"
#include "AttackerPositioningComponent.h"
#include "PlayerAttackPositionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerAttackPositionComponent : public UAttackerPositioningComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnZiplineFlyingModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnZiplineWalkingModifier;
    
public:
    UPlayerAttackPositionComponent();
};

