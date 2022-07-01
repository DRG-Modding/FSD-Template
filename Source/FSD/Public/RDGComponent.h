#pragma once
#include "CoreMinimal.h"
#include "RDGExplodeDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "RDGComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URDGComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRDGExplodeDelegate OnDetonated;
    
    URDGComponent();
};

