#include <iostream>
using namespace std;
float quarters = 0.25;
float dimes = 0.10;
float nickels = 0.05;
float pennies = 0.01;
float espresso_price = 1.50;
float latte_price = 2.50;
float cappuccino_price = 3.00;
int to_makeCappuccino[3] = {250, 24, 100};
int to_makeLatte[3] = {200, 24, 150};
int to_makeEspresso[3] = {50, 18, 50};

void addCoinsInserted(int &q, int &d, int &n, int &p, string &coffetype, float price)
{
    float answer = quarters * q + dimes * d + nickels * n + pennies * p;

    if (answer >= price)
    {

        cout << "Here is your change " << float(answer - price) << "$" << endl; // update coffe-type
        cout << "Here is your coffee " << coffetype << " Enjoy " << endl;
    }
    else
    {
        cout << "You don't have enough money " << endl;
    }
}

void coins(string coffetype, float price)
{
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
    // cout << price ;
    addCoinsInserted(q, d, n, p, coffetype, price);
}

void report(int &w, int &m, int &c)
{
    cout << w << endl;
    cout << m << endl;
    cout << c << endl;
}

void quantityCalci(int *data, int &w, int &m, int &c)
{
    if (w >= data[0] && m >= data[1] && c >= data[2])
    {
        w = w - data[0];
        m = m - data[1];
        c = c - data[2];
        report(w, m, c);
    }

    else
    {
        cout << "Out of Stock Come later !! " << endl;
    }
}

void display()
{
    int water = 500;
    int milk = 150;
    int coffe_powder = 200;
    string coffee_type;
    cout << "What would you like ? (espresso/latte/cappuccino): ";
    cin >> coffee_type;

    if (coffee_type == "REPORT" || coffee_type == "report")
    {
        report(water, milk, coffe_powder);
    }

    else if (coffee_type == "espresso")
    {
        coins(coffee_type, espresso_price);
        quantityCalci(to_makeEspresso, water, milk, coffe_powder);
    }

    else if (coffee_type == "latte")
    {
        coins(coffee_type, latte_price);
        quantityCalci(to_makeLatte, water, milk, coffe_powder);
    }
    else if (coffee_type == "cappuccino")
    {

        coins(coffee_type, cappuccino_price);
        quantityCalci(to_makeCappuccino, water, milk, coffe_powder);
    }
    else
    {
        cout << "Galat type mat kar " << endl;
    }
}

int main()
{

    while (true)
    {
        display();
    }
}