#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUIControlEffectTarget.h"
#include "UObject/NoExportTypes.h"
#include "FSDAnselFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UFSDAnselFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDAnselFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void StopPhotographySession(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void StartPhotographySession(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetUIControlVisibility(UObject* WorldContextObject, const TEnumAsByte<EUIControlEffectTarget> UIControlTarget, const bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetSettleFrames(const int32 NumSettleFrames);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsPhotographyAllowed(const bool bIsPhotographyAllowed);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraMovementSpeed(const float TranslationSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraConstraintDistance(const float MaxCameraDistance);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraConstraintCameraSize(const float CameraSize);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoPostprocess(const bool bShouldAutoPostprocess);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoPause(const bool bShouldAutoPause);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPhotographyAvailable();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPhotographyAllowed();
    
    UFUNCTION(BlueprintCallable)
    static void ConstrainCameraByGeometry(UObject* WorldContextObject, const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& OutCameraLocation);
    
    UFUNCTION(BlueprintCallable)
    static void ConstrainCameraByDistance(UObject* WorldContextObject, const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& OutCameraLocation, float MaxDistance);
    
};

