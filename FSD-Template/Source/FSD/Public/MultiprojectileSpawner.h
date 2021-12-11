#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProjectileSpawnData.h"
#include "UObject/NoExportTypes.h"
#include "MultiprojectileSpawner.generated.h"

class UDataAsset;
class UMultiprojectileSpawner;
class AActor;

UCLASS(BlueprintType)
class FSD_API UMultiprojectileSpawner : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FProjectileSpawnData> ProjectileData;
    
    UPROPERTY(EditAnywhere)
    bool ProjectilesIgnoreEachOther;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFiring() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Fire(const FVector& Velocity, const FVector& Origin);
    
    UFUNCTION(BlueprintCallable)
    static UMultiprojectileSpawner* FindMultiProjectileSpawner(AActor* Actor, UDataAsset* RangedAttack);
    
    UMultiprojectileSpawner();
};

