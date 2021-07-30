#pragma once
#include "Decorator.h"
class ConcreateComponent :
    public Decorator
{
public:
    ConcreateComponent() : Decorator() {};
    ConcreateComponent(IComponent* pDecoratee) : Decorator(pDecoratee) {};
    void Operation() override;
};

class OuterComponent :
    public Decorator
{
public:
    OuterComponent() : Decorator() {};
    OuterComponent(IComponent* pDecoratee) : Decorator(pDecoratee) {};
    void Operation() override;
};

class IntterComponent :
    public Decorator
{
public:
    IntterComponent() : Decorator() {};
    IntterComponent(IComponent* pDecoratee) : Decorator(pDecoratee) {};
    void Operation() override;
};
