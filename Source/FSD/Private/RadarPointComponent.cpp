#include "RadarPointComponent.h"

void URadarPointComponent::MapToRadarPosition(FVector playerPos, FVector playerForward, FVector Pos, bool snap, FVector& radarPos, float& alpha) {
}

URadarPointComponent::URadarPointComponent() {
    this->PointPriority = 0.00f;
    this->WidgetClass = NULL;
}

