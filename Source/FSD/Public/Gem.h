#pragma once
#include "CoreMinimal.h"
#include "CarriableItem.h"
#include "Gem.generated.h"

class UCarriableInstantUsable;
class UResourceData;

UCLASS(Abstract)
class FSD_API AGem : public ACarriableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCarriableInstantUsable* Usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* ResourceType;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float ResourceAmount;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool hasBeenReleased;
    
public:
    AGem();
    UFUNCTION(BlueprintCallable)
    void SetHasBeenReleased(bool NewHasBeenReleased);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasBeenReleased() const;
    
};

