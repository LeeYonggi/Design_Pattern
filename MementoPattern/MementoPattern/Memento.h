#pragma once
#include "Information.h"


class Information;

/// <summary>
/// ���� ������ ������ �ִ� ������
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
