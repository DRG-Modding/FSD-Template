#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AsyncLevelPersistanceActor.generated.h"

class UObject;

UCLASS()
class AAsyncLevelPersistanceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UObject*> References;
    
    AAsyncLevelPersistanceActor();
};

