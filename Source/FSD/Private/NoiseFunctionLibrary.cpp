#include "NoiseFunctionLibrary.h"

class UObject;
class USceneComponent;
class AActor;

void UNoiseFunctionLibrary::SphericalNoiseMovementComponent(UObject* WorldContextObject, USceneComponent* Component, FVector Center, float Radius, float Speed, float TimeOffset) {
}

void UNoiseFunctionLibrary::SphericalNoiseMovementActor(UObject* WorldContextObject, AActor* Actor, FVector Center, float Radius, float Speed, float TimeOffset) {
}

FVector UNoiseFunctionLibrary::NoiseSphere3D(UObject* WorldContextObject, float Time, float Radius) {
    return FVector{};
}

FVector2D UNoiseFunctionLibrary::NoiseSphere2D(UObject* WorldContextObject, float Time, float Radius) {
    return FVector2D{};
}

float UNoiseFunctionLibrary::Noise3D(UObject* WorldContextObject, float X, float Y, float Z) {
    return 0.0f;
}

float UNoiseFunctionLibrary::Noise2D(UObject* WorldContextObject, float X, float Y) {
    return 0.0f;
}

float UNoiseFunctionLibrary::Noise(UObject* WorldContextObject, float X) {
    return 0.0f;
}

UNoiseFunctionLibrary::UNoiseFunctionLibrary() {
}

