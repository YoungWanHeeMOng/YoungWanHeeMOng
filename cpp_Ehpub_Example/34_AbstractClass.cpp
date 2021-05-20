// 34. �߻� Ŭ���� (Abstract Class)
// �߻� Ŭ����
    // ��� Ŭ������ ����� �� ������
    // ���� ��ü�� ������ �� ���� Ŭ������ �߻� Ŭ������ ���Ѵ�.
// ���� Ŭ����
    // ���� ��ü�� ���� �� �� �ִ� Ŭ������ ���� Ŭ������ ���Ѵ�.

// ����޼��� - �Լ� ������ ������ �� �ִ�.
    // �Ļ� ���Ŀ��� �������ϸ� ���� ��ü�� �޼��带 �����Ѵ�.
    // virtual void foo()
    // {
    // }
//���� ���� �޼��� - �Լ� ������ ���� �� �� ����.
    //�Ļ� ���Ŀ��� �������ϸ� �Ļ� ���� ��ü�� ������ �� �ֽ��ϴ�.
    // �Ļ� ���Ŀ��� ���������� ������ �Ļ� ���� ��ü�� ������ �� �����ϴ�. - �߻�Ŭ����
    // virtual void Foo()=0;

#include <iostream>
#include <string>
using namespace std;

class Musician      // �߻� Ŭ����(���� ���� �޼��带 ���� �ִ�)
{
    string name;
    public :
        Musician(string name)
        {
            this->name=name;
        }
        virtual void Play()=0;  //���� ���� �޼���
        void Introduce()
        {
            cout << name << " ���ǰ� : �ȳ�" << endl;
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
        cout << GetName() << " �����ϴ�." << endl;
        cout << "������" << endl;
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
        cout << GetName() << " �����ϴ�." << endl;
        cout << "�εε�~~" << endl;
    }

};

void StartConcert(Musician* musician);
void StartConcert(Musician& musician);
int main()
{
    Musician *musician=new Pianist("���ǰ�");

   Drummer *drummer=new Drummer("�巯��1");
   Pianist * pianist=new Pianist("�ǾƴϽ�Ʈ1");

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