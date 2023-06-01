#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "JettyBootNPC.h"
#include "JettyBootsPlayer.h"
#include "JettyBootsReplay.h"
#include "JettyBootsSave.h"
#include "JettyBootsScore.h"
#include "JettyBootsArcadeActor.generated.h"

class APlayerCharacter;
class UAnimMontage;
class UJettyBootUsableComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class FSD_API AJettyBootsArcadeActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UJettyBootUsableComponent* StartGameUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Player, meta=(AllowPrivateAccess=true))
    FJettyBootsPlayer Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDistanceToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* MaxDistanceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> AnimPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> AnimFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> AnimSucces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJettyBootNPC> HighScoreNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Save, meta=(AllowPrivateAccess=true))
    FJettyBootsSave JettyBootsSave;
    
public:
    AJettyBootsArcadeActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetActivePlayer(APlayerCharacter* InPlayer);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_ReplayPackage(const FJettyBootsReplay& InPackage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveReplayPackage(const FJettyBootsReplay& InPackage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlayerChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHighScoreChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Save();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Player(const FJettyBootsPlayer& OldPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCharacterDestroyed(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterMoved(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterMontageEnded(UAnimMontage* InMontage, bool InInterrupted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerWithinDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastHighScoreIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FJettyBootsScore> GetHighScores() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetActivePlayer() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearHighScores();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ReplayPackage(const FJettyBootsReplay& InPackage);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddHighScoreServer(const FJettyBootsScore& InScore);
    
    UFUNCTION(BlueprintCallable)
    void AddHighScoreClient(const FJettyBootsScore& InScore);
    
};

