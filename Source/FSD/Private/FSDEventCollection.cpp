#include "FSDEventCollection.h"

UFSDEventCollection::UFSDEventCollection() {
}

TArray<UFSDEvent*> UFSDEventCollection::GetEventsSorted() const {
    return TArray<UFSDEvent*>();
}

UFSDEvent* UFSDEventCollection::FindEventHandler(const FName& EventName) const {
    return NULL;
}

TArray<UFSDEvent*> UFSDEventCollection::FindAllEventHandlers(const FName& EventName) const {
    return TArray<UFSDEvent*>();
}


