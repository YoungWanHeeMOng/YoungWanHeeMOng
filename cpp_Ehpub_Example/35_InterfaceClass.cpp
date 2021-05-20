// 35. ���� ���̽� (interface)

/*
    �������̽�
        Ư�� ����� ������ ���� ���
        ���� ���� �޼��常 ����� ���� �ְ�
        ��� ����� public ���ü��� ���´�
        C++������ �������̽� ������ �������� �ʴ´�.
        ������ �߻� Ŭ����
*/


#include <iostream>
#include <string>

#define interface struct
using namespace std;

interface IPlay
{
    virtual void Play()=0;
};
class Man:public IPlay
{
    string name;
    public :
     Man(string name)
     {
         this->name=name;
    }
     virtual void Play()
     {
        cout << name << " �����ϴ�." <<endl;
    }
        
};

void Convert(IPlay * iplay);
int main()
{
    Man *man=new Man("ȫ�浿");
    Convert(man);

    delete man;



    return 0;
}

void Convert(IPlay* iplay)
{
    iplay->Play();
}