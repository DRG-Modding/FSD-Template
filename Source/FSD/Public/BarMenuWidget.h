#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "BarMenuWidget.generated.h"

class ASpaceRigBar;

UCLASS(Abstract, EditInlineNew)
class UBarMenuWidget : public UWindowWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASpaceRigBar> SpaceRigBar;
    
public:
    UBarMenuWidget();
};

