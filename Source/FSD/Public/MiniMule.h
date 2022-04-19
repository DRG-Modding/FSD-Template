#pragma once
#include "CoreMinimal.h"
#include "MULE.h"
#include "MiniMule.generated.h"

class AGem;

UCLASS(Abstract)
class FSD_API AMiniMule : public AMULE {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGem*> LostLegs;
    
public:
    AMiniMule();
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLegsVisibleOnScanner();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnLegsSetVisible();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGem*> FindLegsInLevelSortedByDistance() const;
    
};

