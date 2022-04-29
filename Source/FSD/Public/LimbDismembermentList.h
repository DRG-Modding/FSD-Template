#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LimbDismembermentList.generated.h"

UCLASS(Blueprintable)
class ULimbDismembermentList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Bones;
    
    ULimbDismembermentList();
};

