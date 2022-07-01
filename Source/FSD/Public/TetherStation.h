#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TetherStation.generated.h"

class USkeletalMeshComponent;
class USceneComponent;
class AFacilityGeneratorLine;

UCLASS(Blueprintable)
class FSD_API ATetherStation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BaseMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFacilityGeneratorLine> FacilityGeneratorLineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AreGeneratorsReady, meta=(AllowPrivateAccess=true))
    bool AreGeneratorsReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=Onrep_FacilityActive, meta=(AllowPrivateAccess=true))
    bool FacilityActive;
    
public:
    ATetherStation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnGeneratorLines(const FTransform& startL, const FTransform& startR, const TArray<FTransform>& endL, const TArray<FTransform>& endR, AFacilityGeneratorLine*& outLineL, AFacilityGeneratorLine*& outLineR);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGeneratorsReady(bool ready);
    
private:
    UFUNCTION(BlueprintCallable)
    void Onrep_FacilityActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AreGeneratorsReady();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGeneratorsReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableShields();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ActivateFacility();
    
};

