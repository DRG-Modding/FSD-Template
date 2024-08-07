#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "PFCollisionType.h"
#include "PathfinderCollisionComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPathfinderCollisionComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActivatePFCollisionAtInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PFCollisionType PFColiType;
    
    UPathfinderCollisionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisablePFCollision();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ActivatePFCollision();
    
};

