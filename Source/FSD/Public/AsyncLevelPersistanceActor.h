#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AsyncLevelPersistanceActor.generated.h"

class UObject;

UCLASS(Blueprintable)
class AAsyncLevelPersistanceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> References;
    
    AAsyncLevelPersistanceActor();
};

