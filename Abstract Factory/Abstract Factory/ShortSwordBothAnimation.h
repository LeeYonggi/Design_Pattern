#pragma once
#include "Animation.h"


class ShortSwordBothAnimation :
    public Animation
{
public:
    ShortSwordBothAnimation();
    virtual ~ShortSwordBothAnimation();

    // Animation��(��) ���� ��ӵ�
    virtual void OnAnimation() override;
};

