#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "RotateToFace.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URotateToFace : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Face;
    
    URotateToFace();
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldFaceAway(bool FaceAway);
    
};

