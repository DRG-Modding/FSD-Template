#pragma once
#include "CoreMinimal.h"
#include "ArmorShatterDelegateDelegate.h"
#include "ArmorDamageEffects.h"
#include "Components/ActorComponent.h"
#include "BaseArmorDamageComponent.generated.h"

class USkeletalMeshComponent;
class UFSDPhysicalMaterial;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBaseArmorDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ArmorDamageEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorShatterDelegate OnArmorShatteredEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorDamageEffects ArmorBreakEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFSDPhysicalMaterial*> ArmorPhysMats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    UBaseArmorDamageComponent();
};

