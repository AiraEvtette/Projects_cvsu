#include <iostream>

using namespace std;

int main()
{
    int i,j,a;
    cout<<"Enter a number:";
    cin>>a;
    for(i=1;i<=a;i++){
        for(j=1; j<=i;j++){
            cout<<j;
        }
    cout<<endl;
    }
/*
1
12
123
1234
12345
*/
    return 0;
}
