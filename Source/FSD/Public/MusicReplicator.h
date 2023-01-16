#pragma once
#include "CoreMinimal.h"
#include "ActiveMusicItem.h"
#include "GameFramework/Actor.h"
#include "MusicReplicator.generated.h"

UCLASS(Blueprintable)
class AMusicReplicator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveMusic, meta=(AllowPrivateAccess=true))
    TArray<FActiveMusicItem> ActiveMusic;
    
public:
    AMusicReplicator();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveMusic();
    
};

