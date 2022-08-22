#pragma once

#include <iostream>
#include <string>
#include "Memento.h"

using namespace std;

class Memento;

class Information
{
private:
    string data;
    int workCount;

public:
    void SetData(const string&& tempData)
    {
        data = std::move(tempData);
    }

    void WorkCountPlus()
    {
        workCount++;
    }

    string GetData() const
    {
        return data;
    }

    int GetWorkCount() const
    {
        return workCount;
    }
};