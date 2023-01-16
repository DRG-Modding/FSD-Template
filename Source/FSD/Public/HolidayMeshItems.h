#pragma once
#include "CoreMinimal.h"
#include "HolidayMeshItems.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FHolidayMeshItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> HolidayMeshComponents;
    
    FSD_API FHolidayMeshItems();
};

