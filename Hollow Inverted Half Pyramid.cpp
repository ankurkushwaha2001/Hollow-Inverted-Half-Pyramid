#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0){
                cout<<"*"<<" ";
            }
            else{
                if((j>0)&&(j<m-1)){
                    cout<<"  ";
                }
                else{
                    cout<<"*"<<" ";
                }
            }
        }
        m--;
        cout<<endl;
    }

    return 0;
}
