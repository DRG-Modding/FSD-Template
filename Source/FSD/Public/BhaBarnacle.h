#pragma once
#include "CoreMinimal.h"
#include "TaggedActor.h"
#include "BhaBarnacle.generated.h"

UCLASS(Blueprintable)
class ABhaBarnacle : public ATaggedActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDead;
    
public:
    ABhaBarnacle(const FObjectInitializer& ObjectInitializer);

};

