#include "ConcreateComponent.h"
#include <iostream>
using namespace std;

void ConcreateComponent::Operation()
{
    cout << "開始 主要處理程序" << endl;
    Decorator::Operation(); // 需要(或可能)被介入的點
    cout << "結束 主要處理程序" << endl;
}

void OuterComponent::Operation()
{
    cout << "主要程序前置處理" << endl;
    // 發生錯誤, 拋出錯誤並中斷程序
    //throw exception();
    Decorator::Operation(); // 主要程序
    cout << "主要程序後置處理" << endl;
}

void IntterComponent::Operation()
{
    cout << "開始 介入主要程序" << endl;
    // 介入後發生錯誤, 拋出錯誤並中斷程序
    //throw exception();
    //Decorator::Operation(); // 要介入主要程序內部, 而此程序不會被介面, 這行可以不用
    cout << "結束 介入主要程序" << endl;
}
