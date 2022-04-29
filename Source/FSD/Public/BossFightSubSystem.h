#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BossFightSubSystem.generated.h"

class UBossFightInterface;
class IBossFightInterface;
class AActor;

UCLASS(Blueprintable)
class UBossFightSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossFightDelegate, const TScriptInterface<IBossFightInterface>&, BossFight);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightDelegate OnNewBossFight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFightDelegate OnBossFightRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IBossFightInterface>> ActiveBossFights;
    
public:
    UBossFightSubSystem();
    UFUNCTION(BlueprintCallable)
    void RegisterBossFight(TScriptInterface<IBossFightInterface> BossFight);
    
    UFUNCTION(BlueprintCallable)
    void DeregisterBossFight(AActor* boss);
    
};

