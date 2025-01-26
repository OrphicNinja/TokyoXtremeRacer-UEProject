#include "SUserInfo.h"

FSUserInfo::FSUserInfo() {
    this->OpenArea = ECourseOpenArea::None;
    this->TutorialMode = EGameTutorialMode::None;
    this->MyCarIdSrc = 0;
    this->MaxGarageMyCarNum = 0;
    this->SelectedMyCarId = 0;
    this->UpperLimitCP = 0;
    this->Cp = 0;
    this->CumulativeAcquisitionCP = 0;
    this->TotalToPayCP = 0;
    this->AverageBattleTime = 0.00f;
    this->AverageBattleDistance = 0.00f;
    this->AverageNumOfWallHit = 0.00f;
    this->AverageNumOfVehicleHit = 0.00f;
    this->BattleNum = 0;
    this->WinNum = 0;
    this->LoseNum = 0;
    this->DrawNum = 0;
    this->WiningStreak = 0;
    this->MaxWiningStreak = 0;
    this->WiningStreakForProvenExperienceFromPerk = 0;
    this->NumOfRivalDefeated = 0;
    this->NumOfTeamDefeated = 0;
    this->MaxSpeed = 0.00f;
    this->TotalMileages = 0.00f;
    this->Day = 0;
    this->TimeZone = ERaceTimeZone::RTZ_1;
    this->SelectedMyGarageId = 0;
    this->NumberOfLosingStreaks = 0;
    this->NumberOfTimesMetTuner = 0;
    this->NumberOfTimesTunedByTuner = 0;
    this->TunerAppears = false;
    this->PP = 0;
    this->CumulativeAcquisitionPP = 0;
    this->StoryStage = EStoryStage::None;
    this->EnableSystemMenu = false;
    this->MinBattleTime = 0.00f;
    this->MaxBattleTime = 0.00f;
}

