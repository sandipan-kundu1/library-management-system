#include <iostream>
#include <string> 
using namespace std;

struct library {
    int id;
    string name;
    string author;
    string student;
    int price;
    int pages;
    int quantity;
} lib[20];

void showlist() {
    for (int i = 0; i < 3; ++i) {
        cout << "Book ID: " << lib[i].id;
        cout << "\tBook name: " << lib[i].name;
        cout << "\tBook author: " << lib[i].author;
        cout << "\tBook price: " << lib[i].price;
        cout << "\tBook pages: " << lib[i].pages;
        cout << "\tBook quantity: " << lib[i].quantity << endl;
        cout<<endl;
    }
}
void showadmin()
{
    for(int i=0;i<3;i++)
    {
        cout << "\tBook ID: " << lib[i].id;
        cout << "\tBook name: " << lib[i].name;
        cout << "\tBook author: " << lib[i].author;
        cout << "\tBook price: " << lib[i].price;
        cout << "\tBook pages: " << lib[i].pages;
        cout << "\tBook quantity: " << lib[i].quantity;
        cout<<  "\tBorrower name:"<<lib[i].student;
        cout<<endl;
        cout<<endl;
        cout<<endl;
    }
}

int main() {
    lib[0].id = 1111;
    lib[0].name = "physics";
    lib[0].author = "HC verma";
    lib[0].price = 300;
    lib[0].pages = 600;
    lib[0].quantity = 3;
    lib[0].student= "";

    lib[1].id = 2222;
    lib[1].name = "Math";
    lib[1].author = "RD Sharma";
    lib[1].price = 500;
    lib[1].pages = 700;
    lib[1].quantity = 4;
    lib[1].student= "";

    lib[2].id = 3333;
    lib[2].name = "chemistry";
    lib[2].author = "JD lee";
    lib[2].price = 600;
    lib[2].pages = 200;
    lib[2].quantity = 5;
    lib[2].student= "";
    
    
    for(int k=0;k<2;k++)
    {
        int n;
    cout << "Enter 0 for admin, 1 for user: ";
    cin >> n;
    if (n == 0) 
    {
        showadmin();
        
    } 
    else 
    {
        
        showlist();
        int input=0;
        string nam;
        while(input!=5)
        {
            if(input==2)
        break;
        cout<<"\nEnter 1 to input details like I'd,name,author,student,price,pages"<<endl;
    
        cout<<"\nEnter 2 to quit"<<endl;
        cin>>input;
        
         switch(input)
        {
            case 1:
            int sl;
            cout<<"Enter the sl no of book you want to borrow:";
            cin>>sl;
            cout<<"\nEnter your name:";
            cin>>nam;
            cout<<"\nYou took::\n";
            
            cout<<"Book ID:"<<lib[sl].id;
            cout<<"\tBook name:"<<lib[sl].name;
            cout<<"\tBook author:"<<lib[sl].author;
            cout<<"\tBook price:"<<lib[sl].price;
            cout<<"\tBook pages:"<<lib[sl].pages;
            lib[sl].quantity--;
            lib[sl].student.append(nam);
            break;
            
            case 2:
            //exit(0);
            break;
            
            
            default:
            cout<<"wrong choice.";
            break;
         }
        
        }
    }
    }
    return 0;
}
