#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WeightedRoomSelector.h"
#include "UObject/NoExportTypes.h"
#include "WeightRoomSelectorLibrary.generated.h"

class URoomGenerator;

UCLASS(BlueprintType)
class UWeightRoomSelectorLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void SetupWeightedRoomSelector(UPARAM(Ref) FWeightedRoomSelector& Target, UPARAM(Ref) TArray<URoomGenerator*>& Rooms);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URoomGenerator* SelectRandomRoom(UPARAM(Ref) FWeightedRoomSelector& Target, UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URoomGenerator* GetRandomRoom(UPARAM(Ref) TArray<URoomGenerator*>& Rooms, bool removeChosenRoom, UPARAM(Ref) FRandomStream& RandomStream);
    
    UWeightRoomSelectorLibrary();
};

