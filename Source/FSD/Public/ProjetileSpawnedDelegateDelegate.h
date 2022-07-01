#pragma once
#include "CoreMinimal.h"
#include "ProjetileSpawnedDelegateDelegate.generated.h"

class AActor;
class AProjectileBase;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FProjetileSpawnedDelegate, AProjectileBase*, Projectile, AActor*, Target);

