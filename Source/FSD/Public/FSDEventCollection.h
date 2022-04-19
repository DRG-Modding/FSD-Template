#pragma once
#include "CoreMinimal.h"
#include "FSDEventActivateChangedDelegate.h"
#include "Engine/DataAsset.h"
#include "FSDEventCollection.generated.h"

class UFSDEvent;

UCLASS(BlueprintType)
class FSD_API UFSDEventCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UFSDEvent*> Events;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFSDEventActivateChanged OnEventActiveChanged;
    
    UFSDEventCollection();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFSDEvent* FindEventHandler(const FName& EventName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFSDEvent*> FindAllEventHandlers(const FName& EventName) const;
    
};

