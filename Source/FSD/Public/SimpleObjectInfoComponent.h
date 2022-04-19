#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ObjectInfoComponent.h"
#include "SimpleObjectInfoData.h"
#include "SimpleObjectInfoComponent.generated.h"

class UTexture2D;
class UDialogDataAsset;
class UActorContextWidget;
class USceneComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class USimpleObjectInfoComponent : public UObjectInfoComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InGameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InGameDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* LookAtShout;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* LookAtShoutOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPingableByLaserpointer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorContextWidget> ContextWidgetClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<USceneComponent>, FSimpleObjectInfoData> ComponentMap;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UActorContextWidget* ContextWidget;
    
public:
    USimpleObjectInfoComponent();
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
    
};

