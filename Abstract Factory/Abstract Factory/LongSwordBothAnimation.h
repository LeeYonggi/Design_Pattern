#pragma once
#include "Animation.h"
class LongSwordBothAnimation :
    public Animation
{
public:
    LongSwordBothAnimation();
    virtual ~LongSwordBothAnimation();

    // Animation을(를) 통해 상속됨
    virtual void OnAnimation() override;
};

