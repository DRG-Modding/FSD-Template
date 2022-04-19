#pragma once
#include "CoreMinimal.h"
#include "ShowroomController.h"
#include "EItemCategory.h"
#include "CharacterShowroomController.generated.h"

class APlayerCharacter;
class UCharacterShowroomController;
class UShowroomCameraKey;
class UObject;
class UPlayerCharacterID;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCharacterShowroomController : public UShowroomController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* CharacterInstance;
    
public:
    UCharacterShowroomController();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_CharacterShown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipWeapon(EItemCategory Category);
    
    UFUNCTION(BlueprintCallable)
    static UCharacterShowroomController* DisplayCharacter(UObject* WorldContextObject, UPlayerCharacterID* characterID, UShowroomCameraKey* Key);
    
};

