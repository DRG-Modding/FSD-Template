#pragma once
#include "CoreMinimal.h"
#include "DamageDataBase.h"
#include "DamageData.generated.h"

class UDamageClass;
class AActor;
class AController;

USTRUCT(BlueprintType)
struct FDamageData : public FDamageDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AController> Instigator;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float DamageModifier;
    
    FSD_API FDamageData();
};

