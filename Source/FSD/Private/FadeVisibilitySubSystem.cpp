#include "FadeVisibilitySubSystem.h"

class UPrimitiveComponent;
class ULightComponent;
class UMeshComponent;

void UFadeVisibilitySubSystem::ScalePrimitive(UPrimitiveComponent* Component, FVector StartScale, FVector EndScale, float Duration) {
}

void UFadeVisibilitySubSystem::ScaleOutPrimitive(UPrimitiveComponent* Component, float Duration) {
}

void UFadeVisibilitySubSystem::ScaleInPrimitive(UPrimitiveComponent* Component, float Duration) {
}

void UFadeVisibilitySubSystem::FadeOutLight(ULightComponent* Light, float Duration) {
}

void UFadeVisibilitySubSystem::FadeInMaterialByName(UMeshComponent* Component, FName Name, FName ParameterName, float Duration) {
}

void UFadeVisibilitySubSystem::FadeInMaterialByIndex(UMeshComponent* Component, int32 MaterialIndex, FName ParameterName, float Duration) {
}

void UFadeVisibilitySubSystem::FadeInLight(ULightComponent* Light, float Duration) {
}

UFadeVisibilitySubSystem::UFadeVisibilitySubSystem() {
}

