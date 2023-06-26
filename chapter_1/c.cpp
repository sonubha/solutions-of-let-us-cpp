// #include <bits/stdc++.h>
// using namespace std;

// void display(char ch = '*', int num = 80)
// {

//     for (int i = 1; i <= 5; i++)
//     {
//         cout << ch;
//     }
//     cout << "\n";
//     for (int i = 1; i <= 15; i++)
//     {
//         cout << "-";
//     }
//     cout << "\n";
//     for (int i = 1; i <= 20; i++)
//     {
//         cout << "=";
//     }
// }

// int main()
// {

//     display();

//     return 0;
// }



//   THIS IS SECOND APPROACH "constructor"


#include <bits/stdc++.h>
using namespace std;

void display(char ch = '*', int num = 80)
{
 string stars(5,ch);
 string dashes(15,'-');   //keep in minds that we use ' ' because here we are working on single character
 string equals(20,'=');

 cout<<stars<<endl<<dashes<<endl<<equals<<endl;




}
int main()
{

    display();

    return 0;
}