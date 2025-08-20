// #include<iostream>
// using namespace std;
// int main(){
//     //fibo series;
//     int n;
//     cout << "enter number of elements";
//     cin  >> n;
//     int first=0,second=1,i;
//     for(i=0;i<n;i++){
//         cout << first << " ";
//         int next =first + second ;
//         first = second;
//         second= next;

//     }
//     return 0;
// }

//nth fibonacci number
#include<iostream>
using namespace std;
int main(){
       int first=0;int second=1,next,n;
       cout << " enter the place of the number u want to get :";
       cin >>n;
       for(int i=2;i<=n;i++){//i<=n if we start from 2 if from 0 we go by i<n
        next=first+second;
        first = second;
        second = next;
       }
cout << second << " ";
return 0;

}