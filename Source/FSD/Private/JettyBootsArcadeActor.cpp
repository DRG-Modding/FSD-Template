#include "JettyBootsArcadeActor.h"
#include "JettyBootUsableComponent.h"
#include "Net/UnrealNetwork.h"

void AJettyBootsArcadeActor::SetActivePlayer(APlayerCharacter* InPlayer) {
}

void AJettyBootsArcadeActor::Server_ReplayPackage_Implementation(const FJettyBootsReplay& InPackage) {
}




void AJettyBootsArcadeActor::OnRep_Save() {
}

void AJettyBootsArcadeActor::OnRep_Player(const FJettyBootsPlayer& OldPlayer) {
}

void AJettyBootsArcadeActor::OnPlayerCharacterDestroyed(AActor* InActor) {
}

void AJettyBootsArcadeActor::OnCharacterMoved(float DeltaSeconds, FVector OldLocation, FVector OldVelocity) {
}

void AJettyBootsArcadeActor::OnCharacterMontageEnded(UAnimMontage* InMontage, bool InInterrupted) {
}

bool AJettyBootsArcadeActor::IsPlayerWithinDistance() {
    return false;
}

int32 AJettyBootsArcadeActor::GetLastHighScoreIndex() const {
    return 0;
}

TArray<FJettyBootsScore> AJettyBootsArcadeActor::GetHighScores() const {
    return TArray<FJettyBootsScore>();
}

APlayerCharacter* AJettyBootsArcadeActor::GetActivePlayer() const {
    return NULL;
}

void AJettyBootsArcadeActor::ClearHighScores() {
}

void AJettyBootsArcadeActor::All_ReplayPackage_Implementation(const FJettyBootsReplay& InPackage) {
}

void AJettyBootsArcadeActor::AddHighScoreServer(const FJettyBootsScore& InScore) {
}

void AJettyBootsArcadeActor::AddHighScoreClient(const FJettyBootsScore& InScore) {
}

void AJettyBootsArcadeActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AJettyBootsArcadeActor, Player);
    DOREPLIFETIME(AJettyBootsArcadeActor, JettyBootsSave);
}

AJettyBootsArcadeActor::AJettyBootsArcadeActor() {
    this->StartGameUsable = CreateDefaultSubobject<UJettyBootUsableComponent>(TEXT("StartGameUsable"));
    this->MaxDistanceToPlay = 200;
    this->MaxDistanceComponent = NULL;
}

