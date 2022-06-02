#pragma once
#include "CoreMinimal.h"
#include "ShowroomController.h"
#include "EItemCategory.h"
#include "CharacterShowroomController.generated.h"

class UPlayerCharacterID;
class APlayerCharacter;
class UShowroomCameraKey;
class UCharacterShowroomController;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCharacterShowroomController : public UShowroomController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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

