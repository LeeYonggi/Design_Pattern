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

    // AnimationFactory��(��) ���� ��ӵ�
    virtual Animation* CreateAnimation(AnimationType type) override;
};

