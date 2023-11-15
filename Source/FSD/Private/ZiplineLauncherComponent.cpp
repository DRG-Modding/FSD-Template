#include "ZiplineLauncherComponent.h"

UZiplineLauncherComponent::UZiplineLauncherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitCollisionChannel = ECC_GameTraceChannel7;
    this->ProjectileLocationOffset = 25.00f;
    this->ProjectileClass = NULL;
}

void UZiplineLauncherComponent::Server_Fire_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Destination) {
}

void UZiplineLauncherComponent::All_ShowHit_Implementation() {
}


