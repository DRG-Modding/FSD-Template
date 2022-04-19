#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TreasureWeight.h"
#include "EInputKeys.h"
#include "TreasureContainer.generated.h"

class UTreasureRewarder;
class APlayerCharacter;
class USceneComponent;
class UOncePerPlayerUsableComponent;
class UItemAquisitionSource;

UCLASS()
class FSD_API ATreasureContainer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UOncePerPlayerUsableComponent* CollectUsable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemAquisitionSource* AquisitionSource;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_Collectors, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> Collectors;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_LastJoiner, meta=(AllowPrivateAccess=true))
    APlayerCharacter* LastJoiner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTreasureWeight> PossibleRewarders;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UTreasureRewarder* TreasureRewarder;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
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
    
};

