#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DamageData.h"
#include "Engine/EngineTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DamageFunctionLibrary.generated.h"

class UObject;
class AActor;
class USkeletalMeshComponent;
class UDamageClass;
class UDamageTag;
class UDamageImpulse;
class UFSDPhysicalMaterial;
class ULimbDismembermentList;
class UPawnStatsComponent;

UCLASS(Blueprintable)
class UDamageFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDamageFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetPhysicalMaterialOnHit(UFSDPhysicalMaterial* PhysMat, UPARAM(Ref) FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGibbedDeath(const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
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

