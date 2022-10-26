#pragma once
#include "CoreMinimal.h"
#include "FuelLineEndPoint.h"
#include "RockCrackerDrill.generated.h"

class USingleUsableComponent;

UCLASS(Blueprintable)
class ARockCrackerDrill : public AFuelLineEndPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* ConstructUsable;
    
    ARockCrackerDrill();
    UFUNCTION(BlueprintCallable)
    void SetIsDrilling(bool isDrilling);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDrilling() const;
    
};

