#pragma once
#include "CoreMinimal.h"
#include "ProjectileSpawnData.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "MultiprojectileSpawner.generated.h"

class UMultiprojectileSpawner;
class UDataAsset;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UMultiprojectileSpawner : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProjectileSpawnData> ProjectileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ProjectilesIgnoreEachOther;
    
public:
    UMultiprojectileSpawner();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFiring() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Fire(const FVector& Velocity, const FVector& Origin);
    
    UFUNCTION(BlueprintCallable)
    static UMultiprojectileSpawner* FindMultiProjectileSpawner(AActor* Actor, UDataAsset* RangedAttack);
    
};

