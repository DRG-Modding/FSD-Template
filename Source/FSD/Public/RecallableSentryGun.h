#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RecallableActor.h"
#include "RecallableSentryGun.generated.h"

class ASentryGun;
class APlayerCharacter;

UCLASS(Abstract, Blueprintable)
class ARecallableSentryGun : public ARecallableActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSentryIndexChanged, int32, Index);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSentryIndexChanged OnSentryIndexChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SentryIndex, meta=(AllowPrivateAccess=true))
    int32 SentryIndex;
    
public:
    ARecallableSentryGun();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnSentryReady(ASentryGun* SentryGun, APlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SentryIndex();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetStateDescription(FText& Description) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TSubclassOf<ASentryGun> GetSentryGunClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ASentryGun* GetSentryGun();
    
};

