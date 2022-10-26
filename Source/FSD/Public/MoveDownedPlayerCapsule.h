#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "MoveDownedPlayerCapsule.generated.h"

class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UMoveDownedPlayerCapsule : public UCapsuleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> TargetLocations;
    
public:
    UMoveDownedPlayerCapsule();
};

