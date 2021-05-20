// 33 �޼����� �پ缺
#include <iostream>
#include <string>

using namespace std;

// ������ ������
    // ������� ������ �Ļ� ��ü�� ������ �� �ִ�
// 
// �޼����� ������
    // ��� ���Ŀ��� ���� �޼��带 ������ ���� ���� ��
    // �Ļ����Ŀ��� �������ߴ�.
    // ���� ��ü�� �޼��� �� �����Ѵ�.

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
         cout << name << " �����ϴ�." << endl;
    }
     void Introduce()
     {
         cout << name << " ���ǰ�: �ȳ�"<< endl;
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
            cout << GetName() << " ������ " << endl;
        }
        void Introduce()
        {
            cout << GetName() << " �ǾƴϽ�Ʈ: �ȳ�" << endl;
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
        cout << GetName() << " �εյ� " << endl;
    }
    void Introduce()
    {
        cout << GetName() << " �巯��: �ȳ�" << endl;
    }
};

void StartConcert(Musician *musician);
void StartConcert(Musician& musician);
int main()
{
    Pianist *pianist=new Pianist("�ǾƳ��1");
    Drummer *drummer=new Drummer("�巯�Ӹ�1");
    StartConcert(pianist);
    StartConcert(drummer);
    delete(pianist);
    delete(drummer);


    Pianist pianist2("�ǾƳ��2");
    Drummer drummer2("�巯��2");
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