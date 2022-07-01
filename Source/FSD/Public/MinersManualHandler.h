#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMinersManualSinglePage.h"
#include "UObject/Interface.h"
#include "EMinersManualSection.h"
#include "MinersManualHandler.generated.h"

UINTERFACE(Blueprintable)
class UMinersManualHandler : public UInterface {
    GENERATED_BODY()
};

class IMinersManualHandler : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenMinersManualPage(EMinersManualSinglePage page);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenMinersManualFromID(EMinersManualSection Section, const FGuid& ID);
    
};

