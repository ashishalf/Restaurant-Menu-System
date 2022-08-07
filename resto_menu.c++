
#include <iostream>

using namespace std;

int main()
{   int order, no_items;
    cout<<endl<<endl<<"          ....👳Punjabi Dhaba👳...." <<endl<<endl;
    cout<<"..............Restaurant Menu.............."<<endl<<endl;
    
    // menu card
    cout<<"  1. Dal Makhani          -        ₹ 139/-"<<endl;
    cout<<"  2. Butter Naan          -        ₹ 19/-"<<endl;
    cout<<"  3. Shahi Paneer         -        ₹ 159/-"<<endl;
    cout<<"  4. Sweet Lassi          -        ₹ 79/-"<<endl;
    cout<<"  5. Coffee               -        ₹ 59/-"<<endl<<endl;
    
    // order from customer
    cout<<"  Please select the order number: ";
    cin>>order;
    cout<<endl;
    
    // quantity of order
    cout<<"  Please enter the quantity of order: ";
    cin>>no_items;
    cout<<endl;
    
    //switch case statement
    switch(order){
        case 1:
            cout<<"  Your Order"<<endl;
            cout<<"  Order: Dal Makhani"<<endl;
            cout<<"  Quantity of order: "<<no_items<<endl;
            cout<<"  Price of each item: ₹ 139/- Only"<<endl;
            cout<<"  Total Amount: ₹ "<<139*no_items<<"/- Only"<<endl<<endl;
            cout<<"...........Thank You For Coming..........."<<endl;
            cout<<"  ...........Have a good day..........."<<endl;
            break;

        case 2:
            cout<<"  Your Order"<<endl;
            cout<<"  Order: Butter Naan"<<endl;
            cout<<"  Quantity of order: "<<no_items<<endl;
            cout<<"  Price of each item: ₹ 19/- Only"<<endl;
            cout<<"  Total Amount: ₹ "<<19*no_items<<"/- Only"<<endl<<endl;
            cout<<"...........Thank You For Coming..........."<<endl;
            cout<<"  ...........Have a good day..........."<<endl;
            break;
            
        case 3:
            cout<<"  Your Order"<<endl;
            cout<<"  Order: Shahi Paneer"<<endl;
            cout<<"  Quantity of order: "<<no_items<<endl;
            cout<<"  Price of each item: ₹ 159/- Only"<<endl;
            cout<<"  Total Amount: ₹ "<<159*no_items<<"/- Only"<<endl<<endl;
            cout<<"...........Thank You For Coming..........."<<endl;
            cout<<"  ...........Have a good day..........."<<endl;
            break;
            
        case 4:
            cout<<"  Your Order"<<endl;
            cout<<"  Order: Sweete Lassi"<<endl;
            cout<<"  Quantity of order: "<<no_items<<endl;
            cout<<"  Price of each item: ₹ 79/- Only"<<endl;
            cout<<"  Total Amount: ₹ "<<79*no_items<<"/- Only"<<endl<<endl;
            cout<<"...........Thank You For Coming..........."<<endl;
            cout<<"  ...........Have a good day..........."<<endl;
            break;
            
        case 5:
            cout<<"  Your Order"<<endl;
            cout<<"  Order: Coffee"<<endl;
            cout<<"  Quantity of order: "<<no_items<<endl;
            cout<<"  Price of each item: ₹ 59/- Only"<<endl;
            cout<<"  Total Amount: ₹ "<<59*no_items<<"/- Only"<<endl<<endl;
            cout<<"...........Thank You For Coming..........."<<endl;
            cout<<"  ...........Have a good day..........."<<endl;
            break;
    }
    return 0;
}
