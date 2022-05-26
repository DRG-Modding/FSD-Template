#pragma once
#include "CoreMinimal.h"
#include "HitscanComponent.h"
#include "AllPiercingHitscanComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UAllPiercingHitscanComponent : public UHitscanComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PiercingDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TracePartitions;
    
public:
    UAllPiercingHitscanComponent();
};

