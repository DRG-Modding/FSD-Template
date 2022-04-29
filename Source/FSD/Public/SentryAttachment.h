#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SentryAttachment.generated.h"

UCLASS(Abstract, Blueprintable)
class ASentryAttachment : public AActor {
    GENERATED_BODY()
public:
    ASentryAttachment();
};

