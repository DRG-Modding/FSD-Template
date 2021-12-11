#pragma once
#include "CoreMinimal.h"
#include "MULE.h"
#include "MiniMule.generated.h"

class AGem;

UCLASS(Abstract)
class AMiniMule : public AMULE {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<AGem*> LostLegs;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLegsVisibleOnScanner();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnLegsSetVisible();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGem*> FindLegsInLevelSortedByDistance() const;
    
    AMiniMule();
};

