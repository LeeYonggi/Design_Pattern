#pragma once
#include "AnimationFactory.h"

class Animation;
enum class AnimationType;

class LongSwordFactory :
    public AnimationFactory
{
public:
    LongSwordFactory();
    virtual ~LongSwordFactory();

    // AnimationFactory을(를) 통해 상속됨
    virtual Animation* CreateAnimation(AnimationType type) override;
};

