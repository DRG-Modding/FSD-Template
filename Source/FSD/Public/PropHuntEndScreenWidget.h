#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EPropHuntEndScreen.h"
#include "PropHuntEndScreenWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPropHuntEndScreenWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPropHuntEndScreen EndScreenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GameWon;
    
    UPropHuntEndScreenWidget();

};

