#include "InfluenceTester.h"
#include "Components/SphereComponent.h"

AInfluenceTester::AInfluenceTester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Influencer = NULL;
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
}


