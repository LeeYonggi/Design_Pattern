#pragma once
#include "Animation.h"
class LongSwordAnimation :
    public Animation
{
public:
    LongSwordAnimation();
    virtual ~LongSwordAnimation();

public:


    // Animation��(��) ���� ��ӵ�
    virtual void OnAnimation() override;

};

