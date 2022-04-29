#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NoiseFunctionLibrary.generated.h"

class USceneComponent;
class UObject;
class AActor;

UCLASS(Blueprintable)
class UNoiseFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNoiseFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SphericalNoiseMovementComponent(UObject* WorldContextObject, USceneComponent* Component, FVector Center, float Radius, float Speed, float TimeOffset);
    
    UFUNCTION(BlueprintCallable)
    static void SphericalNoiseMovementActor(UObject* WorldContextObject, AActor* Actor, FVector Center, float Radius, float Speed, float TimeOffset);
    
    UFUNCTION(BlueprintPure)
    static FVector NoiseSphere3D(UObject* WorldContextObject, float Time, float Radius);
    
    UFUNCTION(BlueprintPure)
    static FVector2D NoiseSphere2D(UObject* WorldContextObject, float Time, float Radius);
    
    UFUNCTION(BlueprintPure)
    static float Noise3D(UObject* WorldContextObject, float X, float Y, float Z);
    
    UFUNCTION(BlueprintPure)
    static float Noise2D(UObject* WorldContextObject, float X, float Y);
    
    UFUNCTION(BlueprintPure)
    static float Noise(UObject* WorldContextObject, float X);
    
};

