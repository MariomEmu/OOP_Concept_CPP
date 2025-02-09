#include<iostream>
using namespace std;


class Smartphone{
public:
    virtual void TakeASelfie() = 0;
    virtual void MakeaCall() = 0;




};

class Android : public Smartphone{
public:
    void TakeASelfie(){
        cout<<"Android selfie\n";
    }

    void MakeaCall(){
      cout<<"Android calling\n";

    }



};

class Iphone : public Smartphone{
public:
    void TakeASelfie(){
        cout<<"Iphone selfie\n";
    }

      void MakeaCall(){
      cout<<"Iphone calling\n";

    }


};

int main()
{
     Smartphone* s1 = new Iphone;
     s1->TakeASelfie();
     s1->MakeaCall();
     //Smartphone* s2 = new Iphone;
     //s2->TakeASelfie();


}
// https://www.youtube.com/watch?v=Ui7Dca5Kbvw&t=494s
