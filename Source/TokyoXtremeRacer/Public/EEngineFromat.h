#pragma once
#include "CoreMinimal.h"
#include "EEngineFromat.generated.h"

UENUM(BlueprintType)
enum class EEngineFromat : uint8 {
    E_JB_DET,
    E_KF,
    E_E07A,
    E_C32B,
    E_B16B,
    E_B18C,
    E_L15A,
    E_K20A,
    E_P07A,
    E_F20C,
    E_K20C,
    E_S07A,
    E_JNC,
    E_12A,
    E_13B,
    E_BP_ZE_RS,
    E_13B_REW,
    E_L3_VE,
    E_BP_VE_RS,
    E_13B_MSP,
    E_P5_VP_RS,
    E_PE_VPH,
    E_6A12,
    E_4G63_T,
    E_4B11,
    E_L24,
    E_SR20DET,
    E_RB26DETT,
    E_CR14DE,
    E_VQ35DE_NEO,
    E_VR38DETT,
    E_VQ37VHR,
    E_VR30DDTT,
    E_EJ20,
    E_FA20,
    E_FA24,
    E_K6A,
    E_M15A,
    E_K14C,
    E_5M_GEU,
    E_4A_GEU,
    E_2JZ_GTE,
    E_3S_GTE,
    E_1JZ_GTE,
    E_2ZZ_GE,
    E_1NZ_FE,
    E_1ZZ_FE,
    E_T24A_FTS,
    E_G16E_GTS,
    E_B58B30B,
    E_2UR_GSE,
    Num,
    None,
};

