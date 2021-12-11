#include "DamageFunctionLibrary.h"

class UDamageClass;
class UDamageTag;

bool UDamageFunctionLibrary::IsCorrosiveDeath(UDamageClass* DamageClass, const TArray<UDamageTag*>& Tags) {
    return false;
}

UDamageFunctionLibrary::UDamageFunctionLibrary() {
}

