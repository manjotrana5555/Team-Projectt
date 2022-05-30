// #include <iostream>
// using namespace std;
// int main(){
//     int*ptr;
//     ptr = new int(10);
//     int*ptr1=ptr;
//     cout<<*ptr<<*ptr1;
//     delete ptr;
//     cout<<*ptr<<*ptr1;
// }
// int main(){
//     int*ptr = new int(3);
//     ptr[0]=10;
//     ptr[1]=11;
//     ptr[3]=12;
//     cout<<*(ptr+1);
//     delete ptr;
// }
#include <iostream>
using namespace std;
int main(){
    int*ptr;
    ptr=new int(10);
    int*ptr1=ptr;
    cout<<*ptr<<endl<<ptr1<<endl;
    delete ptr;
    cout<<ptr<<endl;
    cout<<*ptr1;
}