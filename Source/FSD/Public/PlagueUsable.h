#pragma once
#include "CoreMinimal.h"
#include "InstantUsable.h"
#include "PlagueUsable.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlagueUsable : public UInstantUsable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CanDropText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CannotDropText;
    
    UPlagueUsable();
};

