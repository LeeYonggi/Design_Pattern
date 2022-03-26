#pragma once
#include "Animation.h"
class LongSwordAnimation :
    public Animation
{
public:
    LongSwordAnimation();
    virtual ~LongSwordAnimation();

public:


    // Animation을(를) 통해 상속됨
    virtual void OnAnimation() override;

};

