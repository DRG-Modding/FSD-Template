#include "GooGunPuddle.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "SimpleHealthComponent.h"
#include "Templates/SubclassOf.h"

AGooGunPuddle::AGooGunPuddle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SphereTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("SphereTrigger"));
    this->SimpleHealth = CreateDefaultSubobject<USimpleHealthComponent>(TEXT("SimpleHealth"));
    this->SpawnSound = NULL;
    this->ActiveStatusEffectTriggersMask = 0;
    this->LifeTime = 0.00f;
    this->IsOnFire = false;
    this->CollisionOnClients = false;
    this->SphereTrigger->SetupAttachment(RootComponent);
}

void AGooGunPuddle::SetStatusEffect(TSubclassOf<UStatusEffect> NewStatusEffect) {
}


void AGooGunPuddle::OnRep_IsOnFire(bool Prev_IsOnFire) {
}

void AGooGunPuddle::OnRep_ActiveStatusEffectTriggersMask(int32 PreviousMask) {
}

void AGooGunPuddle::OnPuddleEndOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGooGunPuddle::OnPuddleBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGooGunPuddle::OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost) {
}


void AGooGunPuddle::IgniteGoo() {
}

void AGooGunPuddle::AddStatusEffect(TSubclassOf<UStatusEffect> NewStatusEffect) {
}

void AGooGunPuddle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGooGunPuddle, ActiveStatusEffectTriggersMask);
    DOREPLIFETIME(AGooGunPuddle, LifeTime);
    DOREPLIFETIME(AGooGunPuddle, IsOnFire);
}


