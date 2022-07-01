#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DamageData.h"
#include "UObject/NoExportTypes.h"
#include "DamageFunctionLibrary.generated.h"

class UDamageTag;
class UObject;
class UPawnStatsComponent;
class UDamageClass;
class AActor;
class UDamageImpulse;
class USkeletalMeshComponent;
class ULimbDismembermentList;

UCLASS(Blueprintable)
class UDamageFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDamageFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGibbedDeath(const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExplosiveDeath(UObject* WorldContext, UPawnStatsComponent* PawnStats, const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCorrosiveDeath(UDamageClass* DamageClass, const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCookedDeath(const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBurnDeath(UDamageClass* DamageClass, const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetForceFromDamageImpulse(AActor*& Target, const FDamageData& DamageData);
    
    UFUNCTION(BlueprintCallable)
    static UDamageImpulse* GetDamageImpulse(const FDamageData& DamageData);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindClosestBoneIndex(USkeletalMeshComponent*& Mesh, const FVector& Location, ULimbDismembermentList* dismembermentList, float MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    static FName FindClosestBone(USkeletalMeshComponent*& Mesh, const FVector& Location, ULimbDismembermentList* dismembermentList, float MaxDistance);
    
};

