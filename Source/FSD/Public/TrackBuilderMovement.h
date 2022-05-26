#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TrackBuilderMovement.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UTrackBuilderMovement : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
public:
    UTrackBuilderMovement();
};

