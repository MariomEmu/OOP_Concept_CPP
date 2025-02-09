#include<iostream>
using namespace std;


/*
///virtual Function
class Instrument{
public:
    virtual void MakeSound(){
     cout<<"Instrument playing...\n";

     }

};

///when use virtual function the most derived class will be executed
///if there is no implementation inside derived class then execute base class,

class Accordion:public Instrument{
    public:
     void MakeSound(){
     cout<<"Accordion playing...\n";

     }
};




int main()
{
    Instrument* i1 = new Accordion();
    i1->MakeSound();

    return 0;
}
*/

///Pure Virtual Function
 class Instrument{ ///it abstract class cz it has it least one pure virtual function
   public:
       virtual void MakeSound() = 0; ///pure virtual function
       ///pure virtual function force every derive class make their function own implementation


 };

 class Accordion:public Instrument{
 public:
     void MakeSound(){
     cout<<"Accordion playing....\n";

     }
};

 class Piano : public Instrument{
 public:
     void MakeSound(){
     cout<<"Piano playing....\n";

     }
 };



int main()
{
    Instrument* i1 = new Accordion();
   // i1->MakeSound();

    Instrument* i2 = new Piano();
   // i2->MakeSound();

   ///for polymorpic behaviour

   Instrument* instruments[2] = { i1,i2};
   for( int i = 0; i < 2; i++)
      instrument[i]->MakeSound();

    return 0;
}





