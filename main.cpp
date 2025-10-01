#include <iostream>

using namespace std;

int main()
{
    int j=0;//baris
    int n;
    cout << "masukkan suku n: ";
    cin >> n;

    do
    {
        j=j+1;
        int i=0;
        do
        {
            i++;
            cout<<i;
        }while(i<j);
        cout<<endl;
    }while(j<n);

    return 0;


}