#include "ConcreateComponent.h"
#include <iostream>
using namespace std;

void ConcreateComponent::Operation()
{
    cout << "�}�l �D�n�B�z�{��" << endl;
    Decorator::Operation(); // �ݭn(�Υi��)�Q���J���I
    cout << "���� �D�n�B�z�{��" << endl;
}

void OuterComponent::Operation()
{
    cout << "�D�n�{�ǫe�m�B�z" << endl;
    // �o�Ϳ��~, �ߥX���~�ä��_�{��
    //throw exception();
    Decorator::Operation(); // �D�n�{��
    cout << "�D�n�{�ǫ�m�B�z" << endl;
}

void IntterComponent::Operation()
{
    cout << "�}�l ���J�D�n�{��" << endl;
    // ���J��o�Ϳ��~, �ߥX���~�ä��_�{��
    //throw exception();
    //Decorator::Operation(); // �n���J�D�n�{�Ǥ���, �Ӧ��{�Ǥ��|�Q����, �o��i�H����
    cout << "���� ���J�D�n�{��" << endl;
}
