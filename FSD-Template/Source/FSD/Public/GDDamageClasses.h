#pragma once
#include "CoreMinimal.h"
#include "GDDamageClasses.generated.h"

class UDamageClass;

USTRUCT(BlueprintType)
struct FGDDamageClasses {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageClass* Falling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageClass* Fire;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageClass* Heat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageClass* Physical;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageClass* Kinetic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageClass* Explosive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageClass* Cold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageClass* Ice;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageClass* Corrosive;
    
    FSD_API FGDDamageClasses();
};

