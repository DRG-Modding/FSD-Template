#include "GuntowerActivationPlatform.h"
#include "Net/UnrealNetwork.h"

class APlayerCharacter;
class UPrimitiveComponent;
class AActor;
class UHealthComponentBase;
class AGuntowerModule;

void AGuntowerActivationPlatform::UpdatePlayersInside(APlayerCharacter* Character) {
}

void AGuntowerActivationPlatform::ShutDown() {
}

void AGuntowerActivationPlatform::SetPlatformActive(bool IsActive) {
}

void AGuntowerActivationPlatform::ReEnable() {
}


void AGuntowerActivationPlatform::OnRep_PlayersInside() {
}

void AGuntowerActivationPlatform::OnRep_IsShutDown() {
}

void AGuntowerActivationPlatform::OnRep_Disabled() {
}


void AGuntowerActivationPlatform::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



void AGuntowerActivationPlatform::ModuleDestroyed(UHealthComponentBase* Health) {
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
    DOREPLIFETIME(AGuntowerActivationPlatform, PlayersInside);
    DOREPLIFETIME(AGuntowerActivationPlatform, Disabled);
    DOREPLIFETIME(AGuntowerActivationPlatform, IsShutDown);
}

AGuntowerActivationPlatform::AGuntowerActivationPlatform() {
    this->AssignedModule = NULL;
    this->DoneAt = 5.00f;
    this->DisabledTime = 12.00f;
    this->PlayersInside = 0;
    this->Disabled = true;
    this->IsShutDown = false;
}

