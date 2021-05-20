// 33 메서드의 다양성
#include <iostream>
#include <string>

using namespace std;

// 형식의 다형성
    // 기반형식 변수로 파생 개체를 참조할 수 있다
// 
// 메서드의 다형성
    // 기반 형식에서 가상 메서드를 정의한 것이 있을 떄
    // 파생형식에서 재정의했다.
    // 실제 개체이 메서드 가 수행한다.

class Musician
{
    string name;
 public :
     Musician(string name)
     {
         this->name=name;
    }
     virtual void Play()
     {
         cout << name << " 연주하다." << endl;
    }
     void Introduce()
     {
         cout << name << " 음악가: 안녕"<< endl;
    }

     string GetName() const
     {
         return name;
    }
};

class Pianist : public Musician
{
    public:
        Pianist(string name) : Musician(name)
        {

        }

        virtual void Play()
        {
            cout << GetName() << " 딩동댕 " << endl;
        }
        void Introduce()
        {
            cout << GetName() << " 피아니스트: 안녕" << endl;
        }
};

class Drummer : public Musician
{
public:
    Drummer(string name) : Musician(name)
    {

    }

    virtual void Play()
    {
        cout << GetName() << " 두둥둥 " << endl;
    }
    void Introduce()
    {
        cout << GetName() << " 드러머: 안녕" << endl;
    }
};

void StartConcert(Musician *musician);
void StartConcert(Musician& musician);
int main()
{
    Pianist *pianist=new Pianist("피아노맨1");
    Drummer *drummer=new Drummer("드러머맨1");
    StartConcert(pianist);
    StartConcert(drummer);
    delete(pianist);
    delete(drummer);


    Pianist pianist2("피아노맨2");
    Drummer drummer2("드러머2");
    StartConcert(pianist2);
    StartConcert(drummer2);


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