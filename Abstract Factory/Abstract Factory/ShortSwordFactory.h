#pragma once
#include "AnimationFactory.h"

enum class AnimationType;

class ShortSwordFactory :
    public AnimationFactory
{
public:
    ShortSwordFactory();
    virtual ~ShortSwordFactory();

    // AnimationFactory을(를) 통해 상속됨
    virtual Animation* CreateAnimation(AnimationType type) override;
};

