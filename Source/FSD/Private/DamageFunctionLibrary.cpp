#include "DamageFunctionLibrary.h"

class UDamageTag;
class UObject;
class UPawnStatsComponent;
class UDamageImpulse;
class UDamageClass;
class AActor;
class USkeletalMeshComponent;
class ULimbDismembermentList;

bool UDamageFunctionLibrary::IsGibbedDeath(const TArray<UDamageTag*>& Tags) {
    return false;
}

bool UDamageFunctionLibrary::IsExplosiveDeath(UObject* WorldContext, UPawnStatsComponent* PawnStats, const TArray<UDamageTag*>& Tags) {
    return false;
}

bool UDamageFunctionLibrary::IsCorrosiveDeath(UDamageClass* DamageClass, const TArray<UDamageTag*>& Tags) {
    return false;
}

bool UDamageFunctionLibrary::IsCookedDeath(const TArray<UDamageTag*>& Tags) {
    return false;
}

bool UDamageFunctionLibrary::IsBurnDeath(UDamageClass* DamageClass, const TArray<UDamageTag*>& Tags) {
    return false;
}

FVector UDamageFunctionLibrary::GetForceFromDamageImpulse(AActor*& Target, const FDamageData& DamageData) {
    return FVector{};
}

UDamageImpulse* UDamageFunctionLibrary::GetDamageImpulse(const FDamageData& DamageData) {
    return NULL;
}

int32 UDamageFunctionLibrary::FindClosestBoneIndex(USkeletalMeshComponent*& Mesh, const FVector& Location, ULimbDismembermentList* dismembermentList, float MaxDistance) {
    return 0;
}

FName UDamageFunctionLibrary::FindClosestBone(USkeletalMeshComponent*& Mesh, const FVector& Location, ULimbDismembermentList* dismembermentList, float MaxDistance) {
    return NAME_None;
}

UDamageFunctionLibrary::UDamageFunctionLibrary() {
}

