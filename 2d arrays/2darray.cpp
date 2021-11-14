#include<iostream>
using namespace std; 
int main( ) 
{  
      int  n,m;
      cout<<"\nEnter row and column : \n";
      cin >> n;
      cin >> m;
      int s[n][m];
      cout << "\nEnter array elements : \n";
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
            cin>>s[i][j];
        }
      } 
       
      cout<<"\nThe 2-D Array is:\n";
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
            cout << s[i][j] << " ";
        }
        cout<<endl;
      } 
      return 0;
} 