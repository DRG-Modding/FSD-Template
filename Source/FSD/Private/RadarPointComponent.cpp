#include "RadarPointComponent.h"

URadarPointComponent::URadarPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PointPriority = 0.00f;
    this->WidgetClass = NULL;
}

void URadarPointComponent::MapToRadarPosition(FVector playerPos, FVector playerForward, FVector Pos, bool snap, FVector& radarPos, float& alpha) {
}


