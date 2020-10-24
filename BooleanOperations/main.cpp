//
//  main.cpp
//  BooleanOperations
//
//  Created by Garvit Chaudhary And Devender Kumar Pahadia on 24/09/20.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!";
    cout<<"\n======================================================\n";
    int x{};
    int y{};
    int selection{};
    do{
        cout<<"\nEnter the Number Corresponding to the Given Function:\n1.Perform Boolean Operations.\n2.Exit\n";
        
        cin>>selection;
        switch (selection) {
            case 1:{
                cout<<"\nEnter the 2 Boolean values-0,1(only) To Perform the Boolean Operations: \n";
                cin>>x>>y;
                cout<<"\n======================================================\n";
                cout<<"\nNOT "<<x<<" = "<<(!x)<<endl;
                cout<<"\n======================================================\n";
                cout<<"\nNOT "<<y<<" = "<<(!y)<<endl;
                cout<<"\n======================================================\n";
                cout<<x<<" AND "<<y<<" = "<<(x&y)<<endl;
                cout<<"\n======================================================\n";
                cout<<x<<" OR "<<y<<" = "<<(x|y)<<endl;
                cout<<"\n======================================================\n";
                cout<<x<<" XOR "<<y<<" = "<<(x^y)<<endl;
                cout<<"\n======================================================\n";
                cout<<x<<" NAND "<<y<<" = "<<(!(x&y))<<endl;
                cout<<"\n======================================================\n";
                cout<<x<<" NOR "<<y<<" = "<<(!(x|y))<<endl;
                cout<<"\n======================================================\n";
                cout<<x<<" XNOR "<<y<<" = "<<(!(x^y))<<endl;
                cout<<"\n======================================================\n";
                break;
            }
            case 2:break;
            default:
                break;
        }
        
    }
    while(selection!=2);
    return 0;
}
