#include "GooGunPuddle.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class UStatusEffect;
class UPrimitiveComponent;
class AActor;
class UDamageClass;

void AGooGunPuddle::SetStatusEffect(TSubclassOf<UStatusEffect> NewStatusEffect) {
}


void AGooGunPuddle::OnRep_ActiveStatusEffectTriggersMask(int32 PreviousMask) {
}

void AGooGunPuddle::OnPuddleEndOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGooGunPuddle::OnPuddleBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGooGunPuddle::OnHit(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost) {
}

void AGooGunPuddle::AddStatusEffect(TSubclassOf<UStatusEffect> NewStatusEffect) {
}

void AGooGunPuddle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGooGunPuddle, ActiveStatusEffectTriggersMask);
    DOREPLIFETIME(AGooGunPuddle, LifeTime);
}

AGooGunPuddle::AGooGunPuddle() {
    this->SpawnSound = NULL;
    this->ActiveStatusEffectTriggersMask = 0;
    this->LifeTime = 0.00f;
}

