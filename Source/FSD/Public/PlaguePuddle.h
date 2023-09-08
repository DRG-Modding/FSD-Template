#pragma once
#include "CoreMinimal.h"
#include "AdicPuddle.h"
#include "Vacuumable.h"
#include "PlaguePuddle.generated.h"

UCLASS(Blueprintable)
class APlaguePuddle : public AAdicPuddle, public IVacuumable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MaxPlaguePiles;
    
public:
    APlaguePuddle();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnVacuumed();
    
    
    // Fix for true pure virtual functions not being implemented
};

