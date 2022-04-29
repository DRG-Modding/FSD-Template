#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "FirstPersonSkeletalMeshComponent.generated.h"

class APlayerController;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFirstPersonSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UFirstPersonSkeletalMeshComponent();
    UFUNCTION(BlueprintCallable)
    static FVector CalcFirstPersonFOVPositionCorrection(APlayerController* PlayerController, const FVector& origPos);
    
};

