#pragma once
#include "CoreMinimal.h"
#include "ArmorHealthSubItem.generated.h"

USTRUCT(BlueprintType)
struct FArmorHealthSubItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Health;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AdditionalBones;
    
    UPROPERTY(EditAnywhere)
    FName OptionalFXSocket;
    
    FSD_API FArmorHealthSubItem();
};

