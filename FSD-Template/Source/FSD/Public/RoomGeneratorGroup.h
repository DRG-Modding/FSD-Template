#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RoomGeneratorGroupInstance.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "RoomGeneratorGroup.generated.h"

class URoomGenerator;

UCLASS(BlueprintType)
class URoomGeneratorGroup : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<URoomGenerator*> Rooms;
    
    UFUNCTION(BlueprintCallable)
    static URoomGenerator* GetRandomRoomWithTags(UPARAM(Ref) FRoomGeneratorGroupInstance& groupInstance, const FGameplayTagQuery& queury, UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable)
    URoomGenerator* GetRandomRoom(UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRoomGeneratorGroupInstance CreateGroupInstance() const;
    
    URoomGeneratorGroup();
};

