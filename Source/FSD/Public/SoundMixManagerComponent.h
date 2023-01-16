#pragma once
#include "CoreMinimal.h"
#include "SoundMixManagerItem.h"
#include "Components/ActorComponent.h"
#include "SoundMixManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USoundMixManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoundMixManagerItem> SoundMixes;
    
public:
    USoundMixManagerComponent();
};

