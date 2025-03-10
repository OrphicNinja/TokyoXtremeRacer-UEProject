#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SCarLicensePlateAreaRootLoteryInfo.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCarLicensePlateAreaRootLoteryInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    int32 LoteryProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    UDataTable* AreaTireInfoDataTable;
    
    FSCarLicensePlateAreaRootLoteryInfo();
};

