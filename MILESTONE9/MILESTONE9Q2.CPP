#include<iostream>
using namespace std;
int main ()

{
    int k=5;

    for (int i=0; i<5;i++)
    {
              k=5-i;

        for (int j=0;j<5;j++)
        {
            if(i>=j)
            {
                cout<<k;
                k++;

            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

