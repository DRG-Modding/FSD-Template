#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UGCLatentActionManager.generated.h"

class UModioTermsWrapper;
class UModioModInfoWrapper;
class UTexture2DDynamic;

UCLASS(Blueprintable)
class UUGCLatentActionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UModioTermsWrapper> LatestModioTermsAndConditions;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int64, UModioModInfoWrapper*> ModioModMetaDatas;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int64, UTexture2DDynamic*> ModioModThumbnails;
    
    UUGCLatentActionManager();
    UFUNCTION(BlueprintPure)
    UModioModInfoWrapper* GetCachedModioModMetaData(int64 ModId);
    
};

