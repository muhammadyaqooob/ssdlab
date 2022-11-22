#include<iostream>
using namespace std;

class Plan{

protected:
    double rate;

public:

    void getrate(){
        rate=10;
    }

    void calculateBill(int units){
    cout<<"Bill is "<<units*(this->rate)<<"\n";
    }
    
};

class DomesticPlan: public Plan{

public:
    void getRate()
    {
        this->rate=100;

    }
};



class commercialPlan: public Plan{

public:
    void getRate()
    {
        this->rate=150;  
    }
};



class institutionalPlan: public Plan{

public:
    void getRate()
    {
        this->rate=160; 
    }
};


class getPlanFactory{

public:

    DomesticPlan dp1;
    commercialPlan dp2;
    institutionalPlan dp3;

    void getPlan()
    {
        dp1.getRate();
        dp1.calculateBill(12);
        
        dp2.getRate();
        dp2.calculateBill(12);


        dp3.getRate();
        dp3.calculateBill(12);


    }

};






int main()
{

getPlanFactory a1;
a1.getPlan();
k

}
