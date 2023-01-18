#pragma once
#include "CoreMinimal.h"
#include "Aquisitionable.h"
#include "SavablePrimaryDataAsset.h"
#include "VictoryPose.generated.h"

class AActor;
class UAnimSequence;
class UItemAquisitionBase;
class UObject;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class UVictoryPose : public USavablePrimaryDataAsset, public IAquisitionable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemAquisitionBase* Aquisition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimSequence>> Walks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> Prop_Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> Prop_Walk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> Prop_Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> Prop_Idle;
    
public:
    UVictoryPose();
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    void Unlock(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ResetUnlock(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsUnlockedNotFromStart(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsUnlocked(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    void Equip(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

