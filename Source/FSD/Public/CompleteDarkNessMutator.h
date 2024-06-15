#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mutator.h"
#include "CompleteDarkNessMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCompleteDarkNessMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FogInscatteringColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogMaxOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDistance;
    
public:
    UCompleteDarkNessMutator();

};

