#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ObjectInfoComponent.h"
#include "SimpleObjectInfoData.h"
#include "SimpleObjectInfoComponent.generated.h"

class UDialogDataAsset;
class USceneComponent;
class UActorContextWidget;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* LookAtShoutOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* IconOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPingableByLaserpointer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorContextWidget> ContextWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TMap<TWeakObjectPtr<USceneComponent>, FSimpleObjectInfoData> ComponentMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable)
    void OverrideIcon(UTexture2D* InTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDialogDataAsset* GetDefaultLookAtShout() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearLookAtShoutOverride();
    
    UFUNCTION(BlueprintCallable)
    void AddComponentObjectInfo(USceneComponent* TargetComponent, const FSimpleObjectInfoData& Data);
    
};

