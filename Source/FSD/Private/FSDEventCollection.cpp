#include "FSDEventCollection.h"

UFSDEventCollection::UFSDEventCollection() {
}

UFSDEvent* UFSDEventCollection::FindEventHandler(const FName& EventName) const {
    return NULL;
}

TArray<UFSDEvent*> UFSDEventCollection::FindAllEventHandlers(const FName& EventName) const {
    return TArray<UFSDEvent*>();
}


