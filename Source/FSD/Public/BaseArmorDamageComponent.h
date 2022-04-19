#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ArmorShatterDelegateDelegate.h"
#include "ArmorDamageEffects.h"
#include "BaseArmorDamageComponent.generated.h"

class UFSDPhysicalMaterial;
class USkeletalMeshComponent;

UCLASS(Abstract, BlueprintType, meta=(BlueprintSpawnableComponent))
class UBaseArmorDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool ArmorDamageEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FArmorShatterDelegate OnArmorShatteredEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorDamageEffects ArmorBreakEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFSDPhysicalMaterial*> ArmorPhysMats;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    UBaseArmorDamageComponent();
};

