#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "WindowUtilSubsystem.generated.h"

class UWindowUtilEventListener;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UWindowUtilSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UWindowUtilSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWindowUtilEventListener* GetEventListener() const;
    
};

