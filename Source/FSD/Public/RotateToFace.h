#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "RotateToFace.generated.h"

class AActor;

UCLASS(BlueprintType)
class URotateToFace : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector TargetOffset;
    
    UPROPERTY()
    AActor* Target;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Face;
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldFaceAway(bool FaceAway);
    
    URotateToFace();
};

