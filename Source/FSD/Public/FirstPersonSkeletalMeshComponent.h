#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "FirstPersonSkeletalMeshComponent.generated.h"

class APlayerController;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFirstPersonSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UFirstPersonSkeletalMeshComponent();
    UFUNCTION(BlueprintCallable)
    static void SetFirstPersonFOVEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSetFirstPersonFOVEnabled();
    
    UFUNCTION(BlueprintCallable)
    static FVector CalcFirstPersonFOVPositionCorrection(APlayerController* PlayerController, const FVector& origPos);
    
};

