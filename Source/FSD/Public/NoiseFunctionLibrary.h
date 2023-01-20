#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NoiseFunctionLibrary.generated.h"

class AActor;
class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class UNoiseFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNoiseFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SphericalNoiseMovementComponent(UObject* WorldContextObject, USceneComponent* Component, FVector Center, float Radius, float Speed, float TimeOffset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SphericalNoiseMovementActor(UObject* WorldContextObject, AActor* Actor, FVector Center, float Radius, float Speed, float TimeOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector NoiseSphere3D(UObject* WorldContextObject, float Time, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector2D NoiseSphere2D(UObject* WorldContextObject, float Time, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float Noise3D(UObject* WorldContextObject, float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float Noise2D(UObject* WorldContextObject, float X, float Y);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float Noise(UObject* WorldContextObject, float X);
    
};

