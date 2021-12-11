#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SimpleObjectInfoData.h"
#include "ObjectInfoComponent.h"
#include "SimpleObjectInfoComponent.generated.h"

class UDialogDataAsset;
class UTexture2D;
class UActorContextWidget;
class USceneComponent;

UCLASS()
class USimpleObjectInfoComponent : public UObjectInfoComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText InGameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText InGameDescription;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* LookAtShout;
    
    UPROPERTY(Transient)
    UDialogDataAsset* LookAtShoutOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(EditAnywhere)
    bool bIsPingableByLaserpointer;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UActorContextWidget> ContextWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TMap<TWeakObjectPtr<USceneComponent>, FSimpleObjectInfoData> ComponentMap;
    
    UPROPERTY(Export, Transient)
    UActorContextWidget* ContextWidget;
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetInGameName(const FString& GameName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetInGameDescription(const FString& GameDescription);
    
    UFUNCTION(BlueprintCallable)
    void SetContextWidget(UActorContextWidget* InContextWidget);
    
    UFUNCTION(BlueprintCallable)
    void OverrideLookAtShoutOrUseDefault(UDialogDataAsset* InShout);
    
    UFUNCTION(BlueprintCallable)
    void OverrideLookAtShout(UDialogDataAsset* InShout);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDialogDataAsset* GetDefaultLookAtShout() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearLookAtShoutOverride();
    
    UFUNCTION(BlueprintCallable)
    void AddComponentObjectInfo(USceneComponent* TargetComponent, const FSimpleObjectInfoData& Data);
    
    USimpleObjectInfoComponent();
};

