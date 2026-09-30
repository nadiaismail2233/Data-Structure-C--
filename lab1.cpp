//*****************************input an array***********************8
/*#include<iostream>
using namespace std;

int main(){
    int a[10];
    cout<<" enter elements of array: ";
    for(int i=0;i<10;i++)
    cin>>a[i];

cout<<"elements of array are:";
for(int i=0; i<10; i++)
{
cout<<a[i]<<" ";
}
cout<<endl<<"position 3 element is:"<<a[2];
return 0;
}*/
//*****************************reverse an array***********************8
/*#include<iostream>
using namespace std;

int main(){
    int a[10];
    cout<<" enter elements of array: ";
    for(int i=0;i<10;i++)
    cin>>a[i];

cout<<"elements of array are:";
for(int i=9; i>=0; i--){
cout<<a[i]<<" ";}
return 0;
}*/
#include <iostream>
using namespace std;

int main()
{
    int a[10], count = 0;
    cout << " enter elements of array: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 0)
            count++;
    }
    cout << "zero's are:" << endl
         << count;
    return 0;
}
