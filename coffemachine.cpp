#include <iostream>
using namespace std;
float latte_price = 2.50;
float espresso_price = 1.50;
float cappucino_price = 3.00;

void coins(string cfetype,int price){
    int q;
    int d;
    int n;
    int p;

    cout << "Please insert coins." << endl;
    cout << "How many quarters?:";
    cin >> q;
    cout << "How many dimes?:";
    cin >> d;
    cout << "How many nickels?:";
    cin >> n;
    cout << "How many pennies?:";
    cin >> p;

     float answer = 0.25 * q + 0.10 * d + 0.05 * n + 0.01 * p;

    if (answer >= price)
    {

        cout << "Here is your change " << float(answer - price) << "$" << endl; 
        cout << "Here is your coffee " << cfetype << " Enjoy " << endl;
    }
    else
    {
        cout << "You don't have enough money " << endl;
    }
}

void drinktype(){
    string coffetype;
    cin >> coffetype;
    string latte = "Latte";
    string espresso = "Espresso";
    string cappucino = "Cappucino";


    if ( coffetype == latte ){
           coins(latte,latte_price);
    }
    else if(coffetype == espresso){
        coins(espresso,espresso_price);
    }
    else if(coffetype == cappucino){   
        coins(cappucino,cappucino_price);
    }
    else{
        cout << "Error !! " <<endl;
    }
}



int main()
{
  
    cout << "**** Menu **** " << endl;
    cout << "Latte --> " << latte_price << "$" << endl;
    cout << "Espresso --> " << espresso_price << "$" << endl;
    cout << "Cappucino --> " << cappucino_price << "$" << endl;
    cout << "Choose one : " ;
    drinktype();
    

}