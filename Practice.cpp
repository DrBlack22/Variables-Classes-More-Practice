#include <iostream>
#include <string>
using namespace std;

class FetchBurgers{
    public:
        string BT;
    };

class Pizzas{
    public:
        void selectPizza(string x){
            Pizza = x;
        };
    public:
        string fetchPizza(){
        return Pizza;
        };
    private:
        string Pizza;
};

int main()
{
    FetchBurgers type;
    type.BT = "Zinger";
    cout << type.BT << endl;

    Pizzas mypizza;
    mypizza.selectPizza("Medium, Cheese, Onion, Pepperoni, Mushrooms, Spicy, Yummy");
    cout << mypizza.fetchPizza();

    return 0;
}

/* INEFFICIENCIES
- I did a lot of mistakes while writing this bit of code because I was unable to use properly define the DT of the second function inside the Pizzas Class.

- Secondly, I was unable to properly assign the value of x to the Pizza variable inside the Pizzas class while creating the void function.

- I was doing it exactly opposite of how it was supposed to be done.

- Instead of writing Pizza = x, I was writing x = Pizza, due to which the function was unable to assign the value I was entering while calling the void
 function with the x parameter to assign the value to to the Pizza variable.

- Thirdly, I was unable get the value of the Pizza variable while calling the fetchPizza function because instead of setting it to return me the value of
Pizza variable, I had set it to cout that value which threw an error saying operator does not match the DT of the function.

*/
