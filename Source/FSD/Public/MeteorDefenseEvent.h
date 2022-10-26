#pragma once
#include "CoreMinimal.h"
#include "GameEvent.h"
#include "ProgressShout.h"
#include "MeteorDefenseEvent.generated.h"

class APlagueMeteor;

UCLASS(Blueprintable)
class AMeteorDefenseEvent : public AGameEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProgressShout> ProgressShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APlagueMeteor* meteor;
    
public:
    AMeteorDefenseEvent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMeteor(APlagueMeteor* NewMeteor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlagueMeteor* GetMeteor();
    
};

