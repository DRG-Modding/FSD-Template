#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UGCLatentActionManager.generated.h"

class UModioTermsWrapper;
class UTexture2DDynamic;
class UModioModInfoWrapper;

UCLASS(BlueprintType)
class UUGCLatentActionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UModioTermsWrapper> LatestModioTermsAndConditions;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<int64, UTexture2DDynamic*> ModioModThumbnails;
    
    UUGCLatentActionManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UModioModInfoWrapper* GetCachedModioModMetaData(int64 ModId);
    
};

