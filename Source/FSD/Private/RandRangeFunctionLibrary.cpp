#include "RandRangeFunctionLibrary.h"

bool URandRangeFunctionLibrary::TryPickRandomText(const TArray<FText>& TextArray, FRandomStream& RandomStream, FText& OutResult) {
    return false;
}

FText URandRangeFunctionLibrary::PickRandomText(const TArray<FText>& TextArray, FRandomStream& RandomStream) {
    return FText::GetEmpty();
}

int32 URandRangeFunctionLibrary::GetValueFromStream(FIRandRange RandRange, FRandomStream& RandomStream) {
    return 0;
}

float URandRangeFunctionLibrary::GetFloatValue(FRandRange RandRange) {
    return 0.0f;
}

float URandRangeFunctionLibrary::GetFloatFromStream(FRandRange RandRange, FRandomStream& RandomStream) {
    return 0.0f;
}

URandRangeFunctionLibrary::URandRangeFunctionLibrary() {
}

