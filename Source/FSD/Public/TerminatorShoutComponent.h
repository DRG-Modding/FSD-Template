#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TerminatorShoutState.h"
#include "ETerminatorShoutState.h"
#include "TerminatorShoutComponent.generated.h"

class UMeshComponent;
class USoundCue;
class UAudioComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UTerminatorShoutComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTerminatorShoutState> States;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundOriginSocket;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UMeshComponent* OwnerMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ShoutInstance;
    
public:
    UTerminatorShoutComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetShoutState(ETerminatorShoutState State, float delayShout);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_PlayShout(USoundCue* Shout);
    
};

