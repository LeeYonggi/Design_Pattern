#pragma once
#include "Animation.h"
class ShortSwordAnimation :
    public Animation
{
public:
    ShortSwordAnimation();
    virtual ~ShortSwordAnimation();

public:


    // Animation��(��) ���� ��ӵ�
    virtual void OnAnimation() override;

};

