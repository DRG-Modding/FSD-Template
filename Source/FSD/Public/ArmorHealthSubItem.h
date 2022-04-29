#pragma once
#include "CoreMinimal.h"
#include "ArmorHealthSubItem.generated.h"

USTRUCT(BlueprintType)
struct FArmorHealthSubItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AdditionalBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OptionalFXSocket;
    
    FSD_API FArmorHealthSubItem();
};

