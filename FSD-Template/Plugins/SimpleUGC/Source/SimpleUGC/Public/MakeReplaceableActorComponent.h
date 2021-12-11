#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "MakeReplaceableActorComponent.generated.h"

class AActor;

UCLASS(BlueprintType)
class SIMPLEUGC_API UMakeReplaceableActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> CompatibleReplacement;
    
    UMakeReplaceableActorComponent();
};

