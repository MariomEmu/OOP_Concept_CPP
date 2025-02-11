#include<iostream>
using namespace std;


class Student{
  public:
      string Name;
      int Age;
      char Gender;

      virtual void Study() = 0; ///pure virtual method



};

class programmingStudent: public Student{
  public:
      void Study(){

      cout<<"Learning Programming"<<endl;
      }
};

class ArtStudent: public Student{

  public:
      void Study(){
        cout<<"Learning to paint"<<endl;
      }
};

class MusicStudent: public Student{

  public:
      void Study(){
      cout<<"Learning to songs"<<endl;

      }
};

int main()
{
    Student* students[3];
    students[0] = new programmingStudent();
    students[1] = new ArtStudent();
    students[2] = new MusicStudent();

    for( int i = 0; i <= 2; i++)
    {

        students[i] -> Study();
    }

    ///Dealocate memory

    for( int i = 0; i <= 2; i++)
    {

        delete students[i];
    }

    return 0;
}

