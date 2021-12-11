#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SavableObject.generated.h"

UCLASS()
class USavableObject : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
public:
    USavableObject();
};

