#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AsyncPathRequests.generated.h"

class UObject;

UCLASS()
class UAsyncPathRequests : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<UObject>> RequestListeners;
    
    UAsyncPathRequests();
};

