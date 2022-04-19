#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemAggregator.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ItemPlacerAggregator.generated.h"

class AActor;
class AItemMarker;
class UDialogDataAsset;
class AItem;

UCLASS(meta=(BlueprintSpawnableComponent))
class UItemPlacerAggregator : public UItemAggregator {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlacementUpdatedDelegate, bool, InPlacementValid, const FTransform&, InPlacement);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMarkerDelegate, AItemMarker*, Marker);
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> IgnoreActors;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMarkerDelegate OnMarkerSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPlacementUpdatedDelegate OnPlacementChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlacementDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutOnPlaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItemMarker> MarkerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanOnlyPlaceOnTerrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ExcludeTags;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AItemMarker* PlacementMarker;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AItem* Item;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPlacementActive;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMarkerHidden;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMarkerValid;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bCanPlaceMarker;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FTransform LastPlacement;
    
public:
    UItemPlacerAggregator();
    UFUNCTION(BlueprintCallable)
    void ToggleValid(bool Valid);
    
    UFUNCTION(BlueprintCallable)
    void TogglePlacement(bool Inactive);
    
    UFUNCTION(BlueprintCallable)
    void ToggleMarkerHidden(bool InHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlacementEx(FTransform& Placement, bool& OutValidLocation, bool& OutValidMarker) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlacement(FTransform& Placement) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearIgnoredActors();
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoredActor(AActor* InActor);
    
};

