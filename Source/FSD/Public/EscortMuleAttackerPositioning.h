#pragma once
#include "CoreMinimal.h"
#include "AttackerPositioningComponent.h"
#include "UObject/NoExportTypes.h"
#include "EscortMuleAttackerPositioning.generated.h"

class UHealthComponentBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEscortMuleAttackerPositioning : public UAttackerPositioningComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponentBase* Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> AttackerPositions;
    
public:
    UEscortMuleAttackerPositioning();
    UFUNCTION(BlueprintCallable)
    void SetNewMaxAttackers(int32 newMaxAttackers);
    
    UFUNCTION(BlueprintCallable)
    void SetCostModifier(float newModifier);
    
};

