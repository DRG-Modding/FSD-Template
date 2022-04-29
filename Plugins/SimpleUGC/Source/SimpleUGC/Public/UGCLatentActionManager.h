#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UGCLatentActionManager.generated.h"

class UTexture2DDynamic;
class UModioTermsWrapper;
class UModioModInfoWrapper;

UCLASS(Blueprintable)
class UUGCLatentActionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UModioTermsWrapper> LatestModioTermsAndConditions;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<int64, UTexture2DDynamic*> ModioModThumbnails;
    
    UUGCLatentActionManager();
    UFUNCTION(BlueprintPure)
    UModioModInfoWrapper* GetCachedModioModMetaData(int64 ModId);
    
};

