#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorTrackingCheatInterface.h"
#include "EInputKeys.h"
#include "TreasureWeight.h"
#include "TreasureContainer.generated.h"

class APlayerCharacter;
class UItemAquisitionSource;
class UOncePerPlayerUsableComponent;
class USceneComponent;
class UTreasureRewarder;

UCLASS(Blueprintable)
class FSD_API ATreasureContainer : public AActor, public IActorTrackingCheatInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOncePerPlayerUsableComponent* CollectUsable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemAquisitionSource* AquisitionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Collectors, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> Collectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastJoiner, meta=(AllowPrivateAccess=true))
    APlayerCharacter* LastJoiner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTreasureWeight> PossibleRewarders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTreasureRewarder* TreasureRewarder;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreventLatejoiners;
    
public:
    ATreasureContainer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TestAwardTreasure();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPreventFurtherLatejoiners(bool prevent);
    
    UFUNCTION(BlueprintCallable)
    void SetCanCollectTreasure(bool canCollect);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LastJoiner();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Collectors();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerLatejoined(APlayerCharacter* joiner);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerCollectedTreasure(APlayerCharacter* collector, EInputKeys Key);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalPlayerCollectedTreasure(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisableChestLocally();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContainerActivated();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetPreventFurtherLatejoiners() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

