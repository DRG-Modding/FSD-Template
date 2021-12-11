#pragma once
#include "CoreMinimal.h"
#include "InstantUsable.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OncePerPlayerUsableComponent.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOncePerPlayerUsableComponentOnUsersChangedEvent, const TArray<FUniqueNetIdRepl>&, userList);

UCLASS()
class UOncePerPlayerUsableComponent : public UInstantUsable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOncePerPlayerUsableComponentOnUsersChangedEvent OnUsersChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Users)
    TArray<FUniqueNetIdRepl> Users;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUsersChanged(const TArray<FUniqueNetIdRepl>& userList);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Users();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UOncePerPlayerUsableComponent();
};

