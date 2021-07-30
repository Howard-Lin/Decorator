#pragma once
#include "IComponent.h"
class Decorator :
    public IComponent
{
private:
    IComponent* m_decoratee;
public:
    Decorator(IComponent* pDecoratee);
    Decorator();
    ~Decorator();

    virtual void Operation() override;
};

