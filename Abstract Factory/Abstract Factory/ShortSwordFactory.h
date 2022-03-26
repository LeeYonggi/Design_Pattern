#pragma once
#include "AnimationFactory.h"

enum class AnimationType;

class ShortSwordFactory :
    public AnimationFactory
{
public:
    ShortSwordFactory();
    virtual ~ShortSwordFactory();

    // AnimationFactory��(��) ���� ��ӵ�
    virtual Animation* CreateAnimation(AnimationType type) override;
};

