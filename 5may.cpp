// #include<iostream>
// using namespace std;
// int main(){
//     class person 
//     public:
//     int add (int a,int b)
//     {
//         return a+b ;

//     };
//     int fun(int x,int y person*)
// }
  #include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int(*funcptr)(int,int);
    funcptr = add;
    int sum=funcptr(5,5);
    cout<<"Value of sum is"<<sum;
    return 0;
}