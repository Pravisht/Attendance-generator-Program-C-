#include<bits/stdc++.h>
using namespace std;

int main(){
int i;
 string arr[50];
    short loop=0;
    string line;
    ifstream file("t1.txt");
    if(file.is_open())
    {
        while(!file.eof())
        {
            getline(file,line);
            arr[loop]=line;
            cout<<arr[loop]<<endl;
            loop++;
        }
      file.close();
    }

    else
    cout<<"FILE NOT FOUND";


    fstream file3;
    file3.open("t3.txt",ios::out);
    if(!file3)
     cout<<"ERROR"<<endl<<endl;

    else
      cout<<"FILE CREATED"<<endl<<endl;

    ifstream file2("t2.txt");
    if(file2.is_open())
    {
        while(!file2.eof())
        {
            getline(file2,line);
            for(i=0;i<=loop;i++)
            {
             if(line.find(arr[i],0)!=string::npos)
             {
                cout<<arr[i]<<endl;
                file3<<arr[i]<<endl;

             }
            }
       }
       file2.close();
    }

    else
    cout<<"FILE NOT FOUND";

    file3.close();
 return 0;
}
