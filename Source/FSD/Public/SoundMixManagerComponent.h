#pragma once
#include "CoreMinimal.h"
#include "SoundMixManagerItem.h"
#include "Components/ActorComponent.h"
#include "SoundMixManagerComponent.generated.h"

UCLASS()
class USoundMixManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FSoundMixManagerItem> SoundMixes;
    
public:
    USoundMixManagerComponent();
};

