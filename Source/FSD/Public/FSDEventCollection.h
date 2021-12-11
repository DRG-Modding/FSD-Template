#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FSDEventCollection.generated.h"

class UFSDEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDEventCollectionOnEventActiveChanged, const UFSDEvent*, InFsdEvent, bool, InIsActive);

UCLASS(BlueprintType)
class FSD_API UFSDEventCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<UFSDEvent*> Events;
    
    UPROPERTY(BlueprintAssignable)
    FFSDEventCollectionOnEventActiveChanged OnEventActiveChanged;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFSDEvent* FindEventHandler(const FName& EventName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFSDEvent*> FindAllEventHandlers(const FName& EventName) const;
    
    UFSDEventCollection();
};

