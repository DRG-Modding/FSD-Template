#include "DamageEnhancer.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CapsuleHitscanComponent.h"
#include "DamageComponent.h"
#include "HealthComponent.h"
#include "HitscanComponent.h"
#include "ReflectionHitscanComponent.h"

void ADamageEnhancer::HitByHitScan(UHitscanBaseComponent* Component, const FVector& HitPoint, const FVector& Origin) {
}

void ADamageEnhancer::Client_CompleteTrace_Implementation(const FEnhancedTrace& trace) {
}

void ADamageEnhancer::BeginOverlapVsProjectile(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ADamageEnhancer::All_PasteHitScanComponent_Implementation(UHitscanBaseComponent* HitScan) {
}

void ADamageEnhancer::All_PasteDamageComponent_Implementation(UDamageComponent* Damage) {
}

ADamageEnhancer::ADamageEnhancer() {
    this->RootCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->HitscanComponent = CreateDefaultSubobject<UHitscanComponent>(TEXT("HitScan"));
    this->ReflectionHitscanComponent = CreateDefaultSubobject<UReflectionHitscanComponent>(TEXT("ReflectionHitScan"));
    this->CapsuleHitscanComponent = CreateDefaultSubobject<UCapsuleHitscanComponent>(TEXT("CapsuleHitScan"));
    this->EnhanceDamageBy = 2.00f;
    this->LifetimeMaxDamage = 1000.00f;
    this->EnabledDuration = 15.00f;
    this->TraceStepTime = 0.04f;
}

