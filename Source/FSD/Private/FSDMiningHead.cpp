#include "FSDMiningHead.h"
#include "ResourceBank.h"

AFSDMiningHead::AFSDMiningHead() {
    this->ResourceBank = CreateDefaultSubobject<UResourceBank>(TEXT("ResourceBank"));
}

