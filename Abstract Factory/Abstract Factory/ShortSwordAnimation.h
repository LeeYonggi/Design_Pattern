#pragma once
#include "Animation.h"
class ShortSwordAnimation :
    public Animation
{
public:
    ShortSwordAnimation();
    virtual ~ShortSwordAnimation();

public:


    // Animation을(를) 통해 상속됨
    virtual void OnAnimation() override;

};

