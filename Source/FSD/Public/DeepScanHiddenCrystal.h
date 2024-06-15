#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeepScanHiddenCrystal.generated.h"

UCLASS(Blueprintable)
class ADeepScanHiddenCrystal : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CrystalIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool HasEquipmentBeenCalled;
    
public:
    ADeepScanHiddenCrystal(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEquipmentCalled();
    
};

