#include "GuntowerActivationPlatform.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

void AGuntowerActivationPlatform::ShutDown() {
}

void AGuntowerActivationPlatform::SetPlatformActive(bool IsActive) {
}

void AGuntowerActivationPlatform::ReEnable() {
}



void AGuntowerActivationPlatform::PlayerInsideRevived() {
}

void AGuntowerActivationPlatform::PlayerInsideDied(UHealthComponentBase* Health) {
}


void AGuntowerActivationPlatform::OnRep_PlayersInside(int32 OldCount) {
}

void AGuntowerActivationPlatform::OnRep_IsShutDown() {
}

void AGuntowerActivationPlatform::OnRep_Disabled() {
}


void AGuntowerActivationPlatform::OnPlayerLeave(AFSDPlayerState* PlayerState) {
}

void AGuntowerActivationPlatform::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



void AGuntowerActivationPlatform::ModuleDestroyed(UHealthComponentBase* Health) {
}

int32 AGuntowerActivationPlatform::GetPlayerCount() const {
    return 0;
}

AGuntowerModule* AGuntowerActivationPlatform::GetAssignedModule() const {
    return NULL;
}

void AGuntowerActivationPlatform::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

bool AGuntowerActivationPlatform::CanWidgetAppear() const {
    return false;
}

void AGuntowerActivationPlatform::AssignModule(AGuntowerModule* towerModule) {
}

void AGuntowerActivationPlatform::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGuntowerActivationPlatform, AssignedModule);
    DOREPLIFETIME(AGuntowerActivationPlatform, playersInside);
    DOREPLIFETIME(AGuntowerActivationPlatform, Disabled);
    DOREPLIFETIME(AGuntowerActivationPlatform, IsShutDown);
}

AGuntowerActivationPlatform::AGuntowerActivationPlatform() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->STMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("STMesh"));
    this->Trigger = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Trigger"));
    this->AssignedModule = NULL;
    this->DoneAt = 5.00f;
    this->DisabledTime = 12.00f;
    this->playersInside = 0;
    this->Disabled = true;
    this->IsShutDown = false;
}

