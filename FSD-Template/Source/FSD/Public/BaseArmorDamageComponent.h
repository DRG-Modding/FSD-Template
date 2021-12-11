#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "BaseArmorDamageComponent.generated.h"

class USkeletalMeshComponent;
class UParticleSystem;
class UFSDPhysicalMaterial;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBaseArmorDamageComponentOnArmorShatteredEvent, const FVector&, Location);

UCLASS(Abstract, BlueprintType)
class UBaseArmorDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool ArmorDamageEnabled;
    
    UPROPERTY(BlueprintAssignable)
    FBaseArmorDamageComponentOnArmorShatteredEvent OnArmorShatteredEvent;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<UParticleSystem*> ArmorBreakParticles;
    
    UPROPERTY(EditAnywhere)
    TArray<UParticleSystem*> ArmorDisolveParticles;
    
    UPROPERTY(EditAnywhere)
    TArray<UFSDPhysicalMaterial*> ArmorPhysMats;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* Mesh;
    
public:
    UBaseArmorDamageComponent();
};

