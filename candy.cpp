#include <iostream>
 using namespace std;
 class Candy
 {
    string color;
    int points;
    public:
    void setCandy(string,int);
    void displayCandy();

 };
 void Candy::setCandy(string c,int p)
 {
    color=c;points=p;
 }
     void Candy::displayCandy()
     { cout<<"\n color ;"<<color;
    cout<<"\n Points:"<<points;
    }
    int main()
    {
        Candy c1 c2;
        c1.setCandy("Red",35);
        c2.setCandy("blue,40");
        return 0 ;

    }