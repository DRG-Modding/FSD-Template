#include "RandomSubRoomItem.h"
#include "Components/SphereComponent.h"

ARandomSubRoomItem::ARandomSubRoomItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("collider"));
    this->RoomGroup = NULL;
    this->Layer = 0;
}


