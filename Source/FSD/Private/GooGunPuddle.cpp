#include "GooGunPuddle.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "SimpleHealthComponent.h"
#include "Components/SphereComponent.h"

class AActor;
class UStatusEffect;
class UPrimitiveComponent;

void AGooGunPuddle::SetStatusEffect(TSubclassOf<UStatusEffect> NewStatusEffect) {
}


void AGooGunPuddle::OnRep_ActiveStatusEffectTriggersMask(int32 PreviousMask) {
}

void AGooGunPuddle::OnPuddleEndOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGooGunPuddle::OnPuddleBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGooGunPuddle::OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost) {
}


void AGooGunPuddle::IgniteGoo_Implementation() {
}

void AGooGunPuddle::AddStatusEffect(TSubclassOf<UStatusEffect> NewStatusEffect) {
}

void AGooGunPuddle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGooGunPuddle, ActiveStatusEffectTriggersMask);
    DOREPLIFETIME(AGooGunPuddle, LifeTime);
}

AGooGunPuddle::AGooGunPuddle() {
    this->SphereTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("SphereTrigger"));
    this->SimpleHealth = CreateDefaultSubobject<USimpleHealthComponent>(TEXT("SimpleHealth"));
    this->SpawnSound = NULL;
    this->ActiveStatusEffectTriggersMask = 0;
    this->LifeTime = 0.00f;
}

