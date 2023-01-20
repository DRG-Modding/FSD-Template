#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "Subsystems/WorldSubsystem.h"
#include "FadeVisibilitySubSystem.generated.h"

class ULightComponent;
class UMeshComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UFadeVisibilitySubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UFadeVisibilitySubSystem();
    UFUNCTION(BlueprintCallable)
    static void ScalePrimitive(UPrimitiveComponent*& Component, FVector StartScale, FVector EndScale, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void ScaleOutPrimitive(UPrimitiveComponent*& Component, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void ScaleInPrimitive(UPrimitiveComponent*& Component, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutMaterialByName(UMeshComponent*& Component, FName Name, FName ParameterName, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutMaterialByIndex(UMeshComponent*& Component, int32 MaterialIndex, FName ParameterName, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutLight(ULightComponent*& Light, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeLightByCurve(ULightComponent*& Light, UPARAM(Ref) FRuntimeFloatCurve& Curve);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInMaterialByName(UMeshComponent*& Component, FName Name, FName ParameterName, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInMaterialByIndex(UMeshComponent*& Component, int32 MaterialIndex, FName ParameterName, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInLight(ULightComponent*& Light, float Duration);
    
};

