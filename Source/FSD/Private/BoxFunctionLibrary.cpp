#include "BoxFunctionLibrary.h"

FBox UBoxFunctionLibrary::CreateBoxAt(FVector Location, FVector Size) {
    return FBox{};
}

FVector UBoxFunctionLibrary::ClosestPointToBox(FVector Pos, const FBox& Box) {
    return FVector{};
}

float UBoxFunctionLibrary::BoxSize(FBox Box) {
    return 0.0f;
}

FVector UBoxFunctionLibrary::BoxExtends(FBox Box) {
    return FVector{};
}

FVector UBoxFunctionLibrary::BoxCenter(FBox Box) {
    return FVector{};
}

UBoxFunctionLibrary::UBoxFunctionLibrary() {
}

