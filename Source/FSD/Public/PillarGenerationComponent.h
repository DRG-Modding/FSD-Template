#pragma once
#include "CoreMinimal.h"
#include "GenerationComponent.h"
#include "UObject/NoExportTypes.h"
#include "PillarGenerationComponent.generated.h"

class UPillarSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UPillarGenerationComponent : public UGenerationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPillarSettings* PillarSettings;
    
    UPillarGenerationComponent();
};

