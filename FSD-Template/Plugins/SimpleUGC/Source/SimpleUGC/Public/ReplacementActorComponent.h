#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "ReplacementActorComponent.generated.h"

class AActor;

UCLASS(BlueprintType)
class SIMPLEUGC_API UReplacementActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<AActor>> ActorClassesToReplace;
    
    UReplacementActorComponent();
};

