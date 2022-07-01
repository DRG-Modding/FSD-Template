#include "FSDPostProcessingActor.h"

class UObject;
class APostProcessingManager;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UBlendableInterface;
class IBlendableInterface;

void AFSDPostProcessingActor::UnapplyPostProcessingBlendablesByType(UObject* WorldContext, EPostProcessingType Type) {
}

void AFSDPostProcessingActor::UnapplyPostProcessingBlendablesByID(UObject* WorldContext, const FName InID) {
}

void AFSDPostProcessingActor::UnapplyPostProcessingBlendable(UObject* WorldContext, EPostProcessingType Type, TScriptInterface<IBlendableInterface> InBlendableObject) {
}

void AFSDPostProcessingActor::UnapplyAllPostProcessingBlendables(UObject* WorldContext) {
}

void AFSDPostProcessingActor::SetupHDRColorGamma() {
}

void AFSDPostProcessingActor::SetPostProcessManager(APostProcessingManager* InManager) {
}

UMaterialInstanceDynamic* AFSDPostProcessingActor::GetPostProcessingMaterialInstance(UObject* WorldContext, UMaterialInterface* Material) {
    return NULL;
}

UMaterialInstanceDynamic* AFSDPostProcessingActor::ApplyPostProcessingMaterial(UObject* WorldContext, EPostProcessingType Type, UMaterialInterface* Material, float InWeight, const FName InID) {
    return NULL;
}

void AFSDPostProcessingActor::ApplyPostProcessingBlendable(UObject* WorldContext, EPostProcessingType Type, TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight, const FName InID) {
}

AFSDPostProcessingActor::AFSDPostProcessingActor() {
    this->PostProcessingType = EPostProcessingType::GameWorld;
    this->PostProcessComponent = NULL;
}

