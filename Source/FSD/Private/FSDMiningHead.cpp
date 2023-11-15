#include "FSDMiningHead.h"
#include "ResourceBank.h"

AFSDMiningHead::AFSDMiningHead(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ResourceBank = CreateDefaultSubobject<UResourceBank>(TEXT("ResourceBank"));
}


