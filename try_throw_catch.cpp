#include <iostream>
#include <string>
using namespace std;

class Class{

    public:

    string msg;
    float numb;

        Class(void){cout << "This constructor does not have any param and no throws." << endl;}

            Class(string txt) : msg(txt) {cout << "This constructor takes a txt param named: " << msg << endl;}
            
                Class(float n) : numb(n){cout << "This constructor takes a param no. numb named:  " << numb << endl;}
                
                        ~Class(void){cout << "This constructor destructes." << endl;}
                        
                            void Hello(string msg ){cout << "This random function says: " << msg << endl;}
                        

    

};

void DoCalculations(int i){

    if(i == 0)
        throw Class();    //The relevant constructor will be called based up what type( i.e. a float or a string) the Class takes
            Class object("object with param"); //This object will stay alive till the catch finishes its job. 
                                              //And if this object takes a param with either a text or numb 
                                             //the relevant constructor will be called 

    if(i == 1)      
        throw Class(2.023);
            object.Hello("Hello");
            
    if(i == 2)
        throw Class("takes a param with no. 3");
}



int main(){

for(int i = 0; i <= 2; i++){

    try{
        cout << "--------" << endl;

        DoCalculations(i);

    }catch(Class &exc){

        cout << "This is the exception thrown when the condition is met with if." << endl;

        cout << exc.msg << endl;
    }
}

    return 0;

}