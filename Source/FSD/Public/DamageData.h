#pragma once
#include "CoreMinimal.h"
#include "DamageDataBase.h"
#include "DamageData.generated.h"

class AController;
class UDamageClass;
class AActor;

USTRUCT(BlueprintType)
struct FDamageData : public FDamageDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AController> Instigator;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DamageModifier;
    
    FSD_API FDamageData();
};

