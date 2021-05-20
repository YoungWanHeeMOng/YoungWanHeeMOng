// 35. 인터 페이스 (interface)

/*
    인터페이스
        특정 기능을 구현할 것을 약속
        순수 가상 메서드만 멤버로 갖고 있고
        모든 멤버는 public 가시성을 갖는다
        C++언어에서는 인터페이스 형식을 제공하지 않는다.
        묵시적 추상 클래스
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
        cout << name << " 연주하다." <<endl;
    }
        
};

void Convert(IPlay * iplay);
int main()
{
    Man *man=new Man("홍길동");
    Convert(man);

    delete man;



    return 0;
}

void Convert(IPlay* iplay)
{
    iplay->Play();
}