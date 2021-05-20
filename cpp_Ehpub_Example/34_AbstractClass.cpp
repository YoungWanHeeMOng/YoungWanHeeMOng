// 34. 추상 클래스 (Abstract Class)
// 추상 클래스
    // 기반 클래스로 사용할 수 있지만
    // 실제 개체를 생성할 수 없는 클래스를 추상 클래스라 말한다.
// 구상 클래스
    // 실제 개체를 생성 할 수 있는 클래스를 구상 클래스라 말한다.

// 가상메서스 - 함수 본문을 정의할 수 있다.
    // 파생 형식에서 재정의하면 실제 개체의 메서드를 수행한다.
    // virtual void foo()
    // {
    // }
//순수 가상 메서드 - 함수 본문을 정의 할 수 없다.
    //파생 형식에서 재정의하면 파생 형식 개체는 생성할 수 있습니다.
    // 파생 형식에서 재정의하지 않으면 파생 형식 개체도 생성할 수 없습니다. - 추상클랙스
    // virtual void Foo()=0;

#include <iostream>
#include <string>
using namespace std;

class Musician      // 추상 클랙스(순수 가상 메서드를 갖고 있다)
{
    string name;
    public :
        Musician(string name)
        {
            this->name=name;
        }
        virtual void Play()=0;  //순수 가상 메서드
        void Introduce()
        {
            cout << name << " 음악가 : 안녕" << endl;
        }
        string GetName()const
        {
            return name;
        }
};
class Pianist : public Musician
{
public:
    Pianist(string name):Musician(name)
    {
    }
    virtual void Play()
    {
        cout << GetName() << " 연주하다." << endl;
        cout << "딩동댕" << endl;
     }

};
class Drummer : public Musician
{
public:
    Drummer(string name) :Musician(name)
    {
    }
    virtual void Play()
    {
        cout << GetName() << " 연주하다." << endl;
        cout << "두두둥~~" << endl;
    }

};

void StartConcert(Musician* musician);
void StartConcert(Musician& musician);
int main()
{
    Musician *musician=new Pianist("음악가");

   Drummer *drummer=new Drummer("드러머1");
   Pianist * pianist=new Pianist("피아니스트1");

   StartConcert(pianist);
   StartConcert(drummer);

   cout << "===================" << endl;

   musician->Introduce();
   musician->Play();
   cout << "===================" << endl;
   drummer->Introduce();
   drummer->Play();
   cout << "===================" << endl;
   pianist->Introduce();
   pianist->Play();

    delete musician;
    delete drummer;
    delete pianist;

    return 0;
    }


void StartConcert(Musician* musician)
{
    musician->Introduce();
    musician->Play();
}


void StartConcert(Musician& musician)
{
    musician.Introduce();
    musician.Play();
}