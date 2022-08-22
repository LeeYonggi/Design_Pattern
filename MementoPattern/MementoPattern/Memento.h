#pragma once
#include "Information.h"


class Information;

/// <summary>
/// 기존 정보를 가지고 있는 데이터
/// </summary>
class Memento
{
private:
    Information infoData;

public:
    Memento(const Information& copyData)
    {
        infoData = copyData;
    }

    void SetInformation(const Information& setInfo)
    {
        infoData = setInfo;
    }

    Information GetInfoData() const { return infoData; }

public:
    static Memento* CreateMemento(const Information& information) 
    {
        return new Memento(information);
    }

};
