#pragma once
#include "Animation.h"
class LongSwordBothAnimation :
    public Animation
{
public:
    LongSwordBothAnimation();
    virtual ~LongSwordBothAnimation();

    // Animation��(��) ���� ��ӵ�
    virtual void OnAnimation() override;
};

