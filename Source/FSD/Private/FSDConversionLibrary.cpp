#include "FSDConversionLibrary.h"

class USceneComponent;
class AActor;

FVector_NetQuantizeNormal UFSDConversionLibrary::VectorToNetQuantizeNormal(FVector Vec) {
    return FVector_NetQuantizeNormal{};
}

FVector_NetQuantize UFSDConversionLibrary::VectorToNetQuantize(FVector Vec) {
    return FVector_NetQuantize{};
}

FVector UFSDConversionLibrary::QuatToVector(FQuat Quat) {
    return FVector{};
}

FRotator UFSDConversionLibrary::QuatToRotator(FQuat Quat) {
    return FRotator{};
}

FVector_NetQuantizeNormal UFSDConversionLibrary::QuadToNetQuantizeNormal(FQuat Quat) {
    return FVector_NetQuantizeNormal{};
}

FVector UFSDConversionLibrary::ComponentToWorldLocation(USceneComponent* Component) {
    return FVector{};
}

FVector UFSDConversionLibrary::ActorToWorldLocation(AActor* Actor) {
    return FVector{};
}

UFSDConversionLibrary::UFSDConversionLibrary() {
}

