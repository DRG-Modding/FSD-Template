#include "WeightRoomSelectorLibrary.h"

class URoomGenerator;

void UWeightRoomSelectorLibrary::SetupWeightedRoomSelector(FWeightedRoomSelector& Target, TArray<URoomGenerator*>& Rooms) {
}

URoomGenerator* UWeightRoomSelectorLibrary::SelectRandomRoom(FWeightedRoomSelector& Target, FRandomStream& RandomStream) {
    return NULL;
}

URoomGenerator* UWeightRoomSelectorLibrary::GetRandomRoom(TArray<URoomGenerator*>& Rooms, bool removeChosenRoom, FRandomStream& RandomStream) {
    return NULL;
}

UWeightRoomSelectorLibrary::UWeightRoomSelectorLibrary() {
}

