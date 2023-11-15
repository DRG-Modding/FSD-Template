#include "WeightRoomSelectorLibrary.h"

UWeightRoomSelectorLibrary::UWeightRoomSelectorLibrary() {
}

void UWeightRoomSelectorLibrary::SetupWeightedRoomSelector(FWeightedRoomSelector& Target, TArray<URoomGenerator*>& Rooms) {
}

URoomGenerator* UWeightRoomSelectorLibrary::SelectRandomRoom(FWeightedRoomSelector& Target, FRandomStream& RandomStream) {
    return NULL;
}

URoomGenerator* UWeightRoomSelectorLibrary::GetRandomRoom(TArray<URoomGenerator*>& Rooms, bool removeChosenRoom, FRandomStream& RandomStream) {
    return NULL;
}


