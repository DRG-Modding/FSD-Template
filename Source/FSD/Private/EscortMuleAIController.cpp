#include "EscortMuleAIController.h"

AEscortMuleAIController::AEscortMuleAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PathIndex = 0;
    this->CurrentRoom = 0;
    this->EscortObj = NULL;
    this->TunnelStartIndex = 0;
    this->TunnelEndIndex = 0;
}

void AEscortMuleAIController::SetDozerNextPathSegment() {
}



TArray<FVector> AEscortMuleAIController::GetPathForDebug(int32 Segment) {
    return TArray<FVector>();
}

FVector AEscortMuleAIController::GetPathEndTagent() {
    return FVector{};
}

void AEscortMuleAIController::GetFullPath(TArray<FVector>& outPath) const {
}

void AEscortMuleAIController::FindDozerPath(FVector StartPosition) {
}


