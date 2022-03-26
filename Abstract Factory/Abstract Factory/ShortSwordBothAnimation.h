#pragma once
#include "Animation.h"


class ShortSwordBothAnimation :
    public Animation
{
public:
    ShortSwordBothAnimation();
    virtual ~ShortSwordBothAnimation();

    // Animation을(를) 통해 상속됨
    virtual void OnAnimation() override;
};

